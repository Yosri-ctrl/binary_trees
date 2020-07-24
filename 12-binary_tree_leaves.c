#include "binary_trees.h"
/**
*binary_tree_leaves - binary_tree_leaves
*@tree: tree to check
*Return: The leaves from 0 to position of a node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);
	return (count_left + count_right);
}
