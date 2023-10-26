
#include "binaryTree.h"
#include <stdio.h>

void print_binary_tree(struct BinaryTreeNode *head) {
  if (head == NULL) return;

  printf("value: %d\n", head->value);

  print_binary_tree(head->left);
  print_binary_tree(head->right);
}

void binary_tree_example(void) {
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

  print_binary_tree(&treeHead);
}
