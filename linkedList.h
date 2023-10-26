#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_


#include <stdio.h>

struct ListNode {
  int value;
  struct ListNode *next;
};

void print_linked_list(struct ListNode *);
void linked_list_example(void);

#endif

#ifdef LINKED_LIST_IMPLEMENTATION


void print_linked_list(struct ListNode *head) {
  if (head == NULL)
  {
    printf("NULL\n");
    return;
  }

  printf("%d -> ", head->value);
  print_linked_list((*head).next);
}

void linked_list_example(void) {
  struct ListNode listHead = {
    .value = 3,
    .next = NULL,
  };

  struct ListNode next = {
    .value = 4,
    .next = NULL
  };

  listHead.next = &next;

  print_linked_list(&listHead);
}

#endif
