#include "binary_trees.h"
/**
*binary_tree_size - binary_tree_size
*@tree: tree to check
*Return: The size from 0 to position of a node
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);
	count_left = binary_tree_size(tree->left) + 1;
	count_right = binary_tree_size(tree->right);
	return (count_left + count_right);
}
