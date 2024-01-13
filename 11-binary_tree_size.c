#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size;
	size_t r_size;

	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
