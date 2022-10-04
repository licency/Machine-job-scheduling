#include<stdio.h>
#define SUCCESS 1
#define FAIL 0

typedef struct job_details
{
  char *jno;
  char *jd;
  char *m;
  int time;
  char *client;
  struct job_details *next;
}job;

typedef struct linkedlist
{
  job *head;
  job *tail;
}machine;

void addtoList(machine *list, char *str);

int validAdd(job *st, int t1, int t2);

void displayList(machine *list);
