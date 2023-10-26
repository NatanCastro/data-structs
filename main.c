#define LINKED_LIST_IMPLEMENTATION
#include "linkedList.h"
#define BINARY_TREE_IMPLEMENTATION
#include "binaryTree.h"
#include "main.h"
#include <stdint.h>
#include <stdio.h>


int main(void) {
  printf("%s\n", LINKED_LIST_START);
  linked_list_example();
  printf("%s\n", LINKED_LIST_END);

  separetor();

  printf("%s\n",TREE_START);
  tree_example();
  printf("%s\n",TREE_END);
}

void separetor(void) {
  printf("\n");
  for (uint8_t i = 0; i < SEPARETOR_LENGTH; ++i) {
    printf("=");
  }
  printf("\n\n");
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

  print_list(&listHead);
}


void tree_example(void) {
  struct BinaryTreeNode treeHead = {
    .value = 4,
  };

  struct BinaryTreeNode headLeft = {
    .value = 10,
  };
  struct BinaryTreeNode headRight = {
    .value = 15,
  };


  treeHead.left =  &headLeft;
  treeHead.right = &headRight;

  struct BinaryTreeNode leftLeft = {
    .value = 9,
  };
  struct BinaryTreeNode leftRight = {
    .value = 18,
  };

  headLeft.left =  &leftLeft;
  headLeft.right = &leftRight;

  print_tree(&treeHead);
}
