#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_leaf, right_leaf;

	if (!tree || (tree->parent && (!tree->left && !tree->right)))
		return (0);
	// if((!tree->left && !tree->right) || (tree->left && tree->right))
	//     return (1);
	// else return (0);
	left_leaf = binary_tree_is_perfect(tree->left);
	right_leaf = binary_tree_is_perfect(tree->right);
	return (left_leaf == right_leaf);
}
