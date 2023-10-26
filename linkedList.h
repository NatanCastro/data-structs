#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_


#include <stdio.h>

struct ListNode {
  int value;
  struct ListNode *next;
};

void print_list(struct ListNode *);

#endif

#ifdef LINKED_LIST_IMPLEMENTATION


void print_list(struct ListNode *head) {
  if (head == NULL)
  {
    printf("NULL\n");
    return;
  }

  printf("%d -> ", head->value);
  print_list((*head).next);
}

#endif
