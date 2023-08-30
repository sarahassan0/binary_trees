#include "binary_trees.h"
/**
 * find_height - calc the height of tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */

int find_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = find_height(tree->left);
	rightHeight = find_height(tree->right);

	return ((leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_height = find_height(tree->left);
	size_t right_height = find_height(tree->right);

	return (left_height == right_height);
}
