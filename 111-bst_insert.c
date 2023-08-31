#include "binary_trees.h"

/**
 * bst_insert - inserts a value into a Binary Search Tree
 * @tree: double pointer to the root node of the tree
 * @value: value to insert
 * Return: pointer to the new node or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr = *tree;
	bst_t *node, *parent;

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	while (curr)
	{
		parent = curr;
		if (value > curr->n)
			curr = curr->right;
		else if (value < curr->n)
			curr = curr->left;
		else
			return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (value > parent->n)
		parent->right = node;
	else
		parent->left = node;

	return (node);
}
