#include "binary_trees.h"
/**
*binary_tree_is_full - binary_tree_is_full
*@tree: tree to check
*Return: The leaves from 0 to position of a node
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    int right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (right == 1 && left == 1)
		return (1);
	return (0);
}
