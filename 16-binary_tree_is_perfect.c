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
    int left_height, right_height;

    if (!tree)
        return (1);

    if (!tree->left && !tree->right)
        return (1);

    if (!tree->left || !tree->right)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height != right_height)
        return (0);

    return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
