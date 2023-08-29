#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = 0, right_height = 0;
	if (!tree)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	return ((left_height > right_height) ? left_height : right_height);
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_leaf, right_leaf;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_leaf = binary_tree_height(tree->left);
	right_leaf = binary_tree_height(tree->right);


	return (left_leaf == right_leaf);
}
