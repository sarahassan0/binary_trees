#include "binary_trees.h"
/**
 * binary_tree_height_left - calc the height of left side of tree
 * @tree: pointer to the root node of the tree
 * Return: height of left side of tree
 */
size_t binary_tree_height_left(const binary_tree_t *tree)
{
	size_t left_height;

	left_height = 0;

	if (!tree)
		return (0);

	left_height += binary_tree_height_left(tree->left);
	left_height++;

	return (left_height);
}
/**
 * binary_tree_height_right - calc the height of right side of tree
 * @tree: pointer to the root node of the tree
 * Return: height of right side of tree
 */
size_t binary_tree_height_right(const binary_tree_t *tree)
{
	size_t right_height;

	right_height = 0;

	if (!tree)
		return (0);

	right_height += binary_tree_height_right(tree->right);
	right_height++;

	return (right_height);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 of tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int  l, r;

	if (!tree)
		return (0);

	l = binary_tree_height_left(tree->left);
	r = binary_tree_height_right(tree->right);

	return (l - r);
}
