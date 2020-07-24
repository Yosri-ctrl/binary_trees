#include "binary_trees.h"
/**
*binary_tree_is_full - binary_tree_is_full
*@tree: tree to check
*Return: The leaves from 0 to position of a node
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_right = 0, count_left = 0;

	if (tree == NULL)
	return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count_left = binary_tree_is_full(tree->left);
	count_right = binary_tree_is_full(tree->right);
	if (count_right == 1 && count_left == 1)
		return (1);
	return (0);
}
