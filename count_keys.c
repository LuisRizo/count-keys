int count_keys(tree_node_t *tree, key_t a, key_t b) {
  int count = 0;
  tree_node_t * tmp = tree;
  if (tree == NULL) return count;
  else if (tmp->key <= b && tmp->key >= a) count++;

  return count + count_keys(tree->left, a, b) + count_keys(tree->right, a, b);
}