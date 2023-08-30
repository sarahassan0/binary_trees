#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the common ancestor node
 *        NULL if either node is NULL or there's no common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	while (first)
	{
		while (second)
		{
			if ((first->parent == second->parent) ||
					(first->parent == second))
				return (first->parent);
			if (first == second->parent)
				return (second->parent);
		}
		first = first->parent;
	}

	return (NULL);
}
