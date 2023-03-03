#include "binary_trees.h"


/**
 * binary_tree_size - This function measures the size of a
 * binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l; /* Size of left subtree */
	size_t size_r;

	if (tree == NULL)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);

	/* Plus 1 for the root node */
	return (size_l + size_r + 1);
}
