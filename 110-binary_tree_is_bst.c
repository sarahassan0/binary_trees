#include "binary_trees.h"
/**
 * binary_tree_is_bst - check if is bts or not
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
    int left = 1, right = 1;
    int l, r;

    if (!tree)
        return (1);

    if (tree->left && (tree->left->n > tree->n))
        left = 0;
    if (tree->right && (tree->n >= tree->right->n))
        right = 0;

    if (tree->parent && (tree->n <= tree->parent->n) && tree->left)
        left = left && (((tree->left) ? tree->left->n <= tree->parent->n : 1) && (tree->right ? tree->right->n < tree->parent->n : 1));
    if (tree->parent && (tree->n > tree->parent->n))
    {
        right = right && ((tree->left) ? tree->left->n > tree->parent->n : 1) && ((tree->right) ? tree->right->n > tree->parent->n : 1);
    }

    l = binary_tree_is_bst(tree->left);
    r = binary_tree_is_bst(tree->right);

    return (left && right && l && r);
}
