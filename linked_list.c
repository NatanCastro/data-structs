#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


void print_linked_list(list_node_t *head) {
  if (head == NULL) {
    puts("NULL");
    return;
  }

  printf("%i -> ", head->value);

  print_linked_list(head->next);
}

list_node_t *create_list_node(int data) {
  list_node_t *node = malloc(sizeof(list_node_t));
  node->value = data;
  node->next = NULL;

  return node;
}

void delete_linked_list(list_node_t *head) {
  if (head == NULL) return;

  delete_linked_list(head->next);
  free(head);
}

void linked_list_example(void) {
  list_node_t *tmp, *node = NULL;
  list_node_t *head = create_list_node(9);
  tmp = create_list_node(44);
  head->next = tmp;
  node = tmp;
  tmp = create_list_node(2);
  node->next = tmp;

  print_linked_list(head);
  delete_linked_list(head);
}
