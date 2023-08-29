#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t level = 0;

	if (!tree)
		return (0);

	level++
	binary_tree_size(tree->right);
	binary_tree_size(tree->left);
	level++;
	return (size);
}
