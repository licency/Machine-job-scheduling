#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "../header/header.h"

void addtoList(machine *list, char *str)
{
  	job *newnode = (job *)calloc(1, sizeof(job)); 
	job * temp = NULL;
	newnode->next = NULL;
	if(list->head == NULL)
	{
		list->head = newnode;
		list->tail = newnode;
	}
	else
	{
		list->tail->next = newnode;
		list->tail = newnode;
	}
	
	int choice = 0;

	// strtok() function returns a pointer to the first token found in the string. 
	// A null pointer is returned if there are no tokens left to retrieve.
	
	char *token = strtok(str, ":"); // token will be created if : is found 
	while(token != NULL)
	{
		switch(choice)
		{
			case 0:
				newnode->jno = (char *)calloc(strlen(token), sizeof(char));
				strcpy(newnode->jno, token);
				break;
			case 1:
				newnode->jd = (char *)calloc(strlen(token), sizeof(char));
				strcpy(newnode->jd, token);
				break;
			case 2:
				newnode->m = (char *)calloc(strlen(token), sizeof(char));
				strcpy(newnode->m, token);
				break;
			case 3:
				newnode->time = atoi(token);
				break;
			case 4:
				newnode->client = (char *)calloc(strlen(token), sizeof(char));
				strcpy(newnode->client, token);
				break;
			default:
				printf("\n");
				break;
		}
		choice++;
		token = strtok(NULL, ":");
		// Tokenization resumes at the first character following the found and overwrite 
		//character from the previous call.
	}
}
