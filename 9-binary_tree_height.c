#include "binary_trees.h"


/**
 * binary_tree_height - This function measures the height
 * of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure
 * the height.
 *
 * Return: The height of the binary tree. or if tree is NULL,
 * your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l; /* height of the left subtree */
	size_t height_r; /* height of the right subtree */

	/* while tree->left is not NULL return 1 else 0.*/
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the biggest */
	return (height_r > height_l ? height_r : height_l);
}
