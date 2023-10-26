#include "linkedList.h"
#include <stdio.h>

void print_linked_list(struct ListNode *head) {
  if (head == NULL)
  {
    printf("NULL\n");
    return;
  }

  printf("%d -> ", head->value);
  print_linked_list((*head).next);
}

