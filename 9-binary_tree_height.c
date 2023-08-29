#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    int left_height, right_height;
    left_height = 0, right_height = 0;

	if (!tree)
		return(0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
            return(left_height +1);
    return(right_height +1);
}
