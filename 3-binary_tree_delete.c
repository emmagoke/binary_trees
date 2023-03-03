#include "binary_trees.h"

/**
 * _delete - This function deletes a node at a time
 * @tree: a pointer to a node of the tree to be deleted
 *
 * Return: Nothing.
 */
void _delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
	{
		_delete(tree->left);
		free(tree->left);
	}

	if (tree->right != NULL)
	{
		_delete(tree->right);
		free(tree->right);
	}
}

/**
 * binary_tree_delete - This function deletes an entire binary tree
 * @tree: a pointer to the root node of the
 * tree to delete
 *
 * Return: Nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		_delete(tree);
		free(tree);
	}
}
