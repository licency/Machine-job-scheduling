#include<stdio.h>
#include "../header/header.h>

void displayList(machine *list)
{
  printf("\n\n~~~~~Contents of Linked list~~~~~\n");
  job *temp = NULL;
  
  for(temp = list->head; temp != list->tail->next; temp = temp->next)
  {
    printf("%s\t%s\t%s\t%d\t%s\n\n", temp->jno, temp->jd, temp->m, temp->time, temp->client);
  }
}
