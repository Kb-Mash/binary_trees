#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf of a binary tree
 * @node: pointer to the node
 *
 * Return: 1 if it's a leaf, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
