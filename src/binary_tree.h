#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef struct BinaryTreeNode {
  int value;
  struct BinaryTreeNode *left, *right;
} btn_t;

uint32_t height(btn_t *);
void append_node(btn_t *, btn_t *);
btn_t *create_node(int);
void print_pre_order(btn_t *);
void print_in_order(btn_t *);
void print_post_order(btn_t *);
void print_per_level(btn_t *);
void print_current_level(btn_t *, uint32_t);
void binary_tree_example(void);

#endif // BINARY_TREE_H_
