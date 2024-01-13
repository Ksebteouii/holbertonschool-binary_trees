#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if tree is perfect 0 if not
 * - Returns 0 if tree is NULL.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height = 0;
	int left_leaves, right_leaves = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
		return (left_leaves == right_leaves);

}
