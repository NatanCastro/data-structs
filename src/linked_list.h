#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
  int value;
  struct ListNode *next;
} list_node_t;

void print_linked_list(list_node_t *);
list_node_t *create_list_node(int);
void delete_linked_list(list_node_t *);
void linked_list_example(void);

#endif
