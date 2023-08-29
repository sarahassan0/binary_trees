#include "binary_trees.h"
/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: If tree is NULL, must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *root = tree->parent;
	size_t depth = 0;

	if (!tree)
		return (0);
	while (root)
	{
		root = root->parent;
		depth++;
	}
	return (depth);
}
