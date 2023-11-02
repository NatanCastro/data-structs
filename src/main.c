#include "binary_tree.h"
#include "linked_list.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void separetor(void);

#define SEPARETOR_LENGTH 20
#define LINKED_LIST_START "linked list start"
#define LINKED_LIST_END "linked list end"
#define TREE_START "binary tree start"
#define TREE_END "binary tree end"

int main(void) {
  printf("%s\n", LINKED_LIST_START);
  linked_list_example();
  printf("%s\n", LINKED_LIST_END);

  separetor();

  printf("%s\n", TREE_START);
  binary_tree_example();
  printf("%s\n", TREE_END);
}

void separetor(void) {
  printf("\n");
  for (uint8_t i = 0; i < SEPARETOR_LENGTH; ++i) {
    printf("=");
  }
  printf("\n\n");
}
