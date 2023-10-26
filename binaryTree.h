#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct BinaryTreeNode {
  int value;
  struct BinaryTreeNode *left, *right;
};

void print_tree(struct BinaryTreeNode *);

#endif


#ifdef BINARY_TREE_IMPLEMENTATION

void print_tree(struct BinaryTreeNode *head) {
  if (head == NULL) return;

  printf("value: %d\n", head->value);

  print_tree(head->left);
  print_tree(head->right);
}

#endif
