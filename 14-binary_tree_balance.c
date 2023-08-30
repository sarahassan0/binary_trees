#include "binary_trees.h"
/**
 * binary_tree_height_left - calc the height of left side of tree
 * @tree: pointer to the root node of the tree
 * Return: height of left side of tree
 */
int find_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (-1);

	leftHeight = find_height(tree->left);
	rightHeight = find_height(tree->right);

	return ((leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1));
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

	l = find_height(tree->left);
	r = find_height(tree->right);

	return (l - r);
}
