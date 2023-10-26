
#include "binaryTree.h"
#include <stdio.h>

void print_tree(struct BinaryTreeNode *head) {
  if (head == NULL) return;

  printf("value: %d\n", head->value);

  print_tree(head->left);
  print_tree(head->right);
}
