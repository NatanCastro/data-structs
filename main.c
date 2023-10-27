#include <stdlib.h>
#define LINKED_LIST_IMPLEMENTATION
#include "linkedList.h"
#define BINARY_TREE_IMPLEMENTATION
#include "binaryTree.h"
#include "main.h"
#include <stdint.h>
#include <stdio.h>

void separetor(void);

int main(void) {
  printf("%s\n", LINKED_LIST_START);
  linked_list_example();
  printf("%s\n", LINKED_LIST_END);

  separetor();

  printf("%s\n",TREE_START);
  binary_tree_example();
  printf("%s\n",TREE_END);
}

void separetor(void) {
  printf("\n");
  for (uint8_t i = 0; i < SEPARETOR_LENGTH; ++i) {
    printf("=");
  }
  printf("\n\n");
}
