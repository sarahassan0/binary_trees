#include "binary_trees.h"
// int binary_tree_is_leaf(const binary_tree_t *node)
// {
// 	if (!node)
// 		return (0);

// 	if (!node->left && !node->right)
// 		return (1);

// 	return (0);
// }

// size_t binary_tree_depth(const binary_tree_t *tree)
// {
// 	binary_tree_t *root = tree->parent;
// 	size_t depth = 0;

// 	if (!tree)
// 		return (0);
// 	while (root)
// 	{
// 		root = root->parent;
// 		depth++;
// 	}
// 	return (depth);
// }

// int binary_tree_pre(const binary_tree_t *tree)
// {
// 	int ll,nn = 0;
// 	if (!tree )
// 		return (0);
//     if (binary_tree_is_leaf(tree->left))
// 	    ll = binary_tree_depth(tree->left);
// 	if (binary_tree_is_leaf(tree->right))
// 	    nn = binary_tree_depth(tree->right);
// 	binary_tree_pre(tree->left);
// 	binary_tree_pre(tree->right);
// 	return (ll == nn);
// }

// /**
//  * binary_tree_is_perfect - checks if a binary tree is perfect.
//  * @tree: pointer to the root node of the tree to check.
//  * Return: 0 if tree is NULL, otherwise 1.
//  */



// int binary_tree_is_perfect(const binary_tree_t *tree)
// {
// 	int left_leaf, right_leaf =0;

// 	if (!tree )
// 		return (0);

// 	left_leaf = binary_tree_pre(tree->left);
// 	right_leaf = binary_tree_pre(tree->right);

// 	return (left_leaf == right_leaf);
// }

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
