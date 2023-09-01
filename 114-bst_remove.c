#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree:  pointer to the root node of the BST to search
 * @value:  value to search in the tree
 * Return: pointer to the node containing a value equals to value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	(void)value;

	bst_t *node;
	node = bst_search(root, value);

	if (!node->left && !node->right)
	{
		printf("%d\n", node->parent->right->n);
		if (node->parent->left)
		{
			(value == node->parent->left->n) ? node->parent->left = NULL : 0;
		}
		else
		{
			(value == node->parent->right->n) ? node->parent->right = NULL : 0;
		}
		// free(node);
		// return (root);
	}
	else if (node->left && !node->right)
	{
		node->left->parent = node->parent;
		node->parent->right = node->left;
		free(node);
	}
	else if (!node->left && node->right)
	{
		node->right->parent = node->parent;
		node->parent->left = node->right;
	}

	free(node);

	return (root);
}
// else
// {
// 	printf(",,");
// 	if (node->right->left)
// 	{
// 		printf(",,");
// 		left_node = node->right->left;
// 		while (left_node->left)
// 			left_node = left_node->left;

// 		left_node->parent = node->parent ? node->parent : NULL;
// 		left_node->left = node->left;
// 		left_node->right = node->right;
// 		node->right->parent = left_node;
// 		// left_node->right->parent = left_node;
// 		node->left->parent = left_node;

// 		// if (value > node->parent->n)
// 		// 	node->parent->right = left_node;
// 		// else
// 		// 	node->parent->left = left_node;
// 		if (node == root)
// 			root = left_node;
// 		// free(node);
// 		free(left_node);
// 	}
// 	else
// 	{
// 		child_node = node->right;
// 		child_node->parent = node->parent;
// 		child_node->left = node->left;
// 		node->left->parent = child_node;

// 		if (value > node->parent->n)
// 			node->parent->right = child_node;
// 		else
// 			node->parent->left = child_node;
// 		free(node);
// 	}
// }
// free(left_node);
