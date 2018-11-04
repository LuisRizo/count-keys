int count_keys(tree_node_t *tree, key_t a, key_t b) {
  if (tree->right == NULL) { // Found a leaf
    if (tree->key >= a && tree->key <= b) // Is a <= leaf->key <= b?
      return 1; // If true, count++;
    return 0; // else, do not count this leaf.
  }
  return count_keys(tree->left, a, b) + count_keys(tree->right, a, b);
}