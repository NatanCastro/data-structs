#include "binary_tree.h"
#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void append_node(btn_t *head, btn_t *node) {
  if (head == NULL) {
    head = node;
    return;
  }
  if (head->value > node->value) {
    if (head->left == NULL) {
      head->left = node;
    } else {
      append_node(head->left, node);
    }
  } else {
    if (head->right == NULL) {
      head->right = node;
    } else {
      append_node(head->right, node);
    }
  }
}

btn_t *create_node(int value) {
  btn_t *node = (btn_t *)malloc(sizeof(btn_t));

  node->value = value;
  node->left = NULL;
  node->right = NULL;

  return node;
}

void print_pre_order(btn_t *head) {
  if (head == NULL)
    return;

  printf("%d-", head->value);

  print_pre_order(head->left);
  print_pre_order(head->right);
}

void print_in_order(btn_t *head) {
  if (head == NULL)
    return;

  print_in_order(head->left);

  printf("%d-", head->value);

  print_in_order(head->right);
}

void print_post_order(btn_t *head) {
  if (head == NULL)
    return;

  print_post_order(head->left);
  print_post_order(head->right);

  printf("%d-", head->value);
}

uint32_t height(btn_t *node) {
  if (node == NULL)
    return 0;
  int lheight = height(node->left);
  int rheight = height(node->right);

  if (lheight > rheight)
    return (lheight + 1);
  else
    return (rheight + 1);
}

/*
 * FIX: fix per level traversal implementation
 */
void print_per_level(btn_t *head) {
  assert(false && "FIX: fix per level traversal implementation");
  uint32_t h = height(head);

  for (uint32_t i = 1; i < h; i++)
    print_current_level(head, i);
}

void print_current_level(btn_t *node, uint32_t level) {
  printf("%i", level);
  if (node == NULL)
    return;
  if (level == 1)
    printf("%d-", node->value);
  else if (level > 1) {
    print_current_level(node->left, level - 1);
    print_current_level(node->right, level - 1);
  }
}

void binary_tree_example(void) {
  btn_t *head = create_node(4);
  btn_t *node1 = create_node(3);
  btn_t *node2 = create_node(5);
  btn_t *node3 = create_node(7);
  btn_t *node4 = create_node(2);
  btn_t *node5 = create_node(1);

  append_node(head, node1);
  append_node(head, node2);
  append_node(head, node3);
  append_node(head, node4);
  append_node(head, node5);

  printf("pre-order: ");
  print_pre_order(head);
  printf("\nin-order: ");
  print_in_order(head);
  printf("\npost-order: ");
  print_post_order(head);
  // printf("\nper-level: ");
  // print_per_level(&head);
  printf("\n");
}
