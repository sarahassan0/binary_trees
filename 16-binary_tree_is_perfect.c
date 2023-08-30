#include "binary_trees.h"
/**
 * find_height - calc the height of tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */

int find_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
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
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = find_height(tree->left);
	right_height = find_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

/*
 * this code has one red check
 *  int binary_tree_is_perfect(const binary_tree_t *tree)
 {
 int left_leaf, right_leaf;

 if (!tree || (tree->parent && (!tree->left && !tree->right)))
 return (0);

 left_leaf = binary_tree_is_perfect(tree->left);
 right_leaf = binary_tree_is_perfect(tree->right);
 return (left_leaf == right_leaf);
 }
 */
