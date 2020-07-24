#include "binary_trees.h"
/**
*binary_tree_leaves - binary_tree_leaves
*@tree: tree to check
*Return: The leaves from 0 to position of a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		count_left += binary_tree_nodes(tree->left) + 1;
		count_right += binary_tree_nodes(tree->right) + 1;
		return (count_left + count_right - 1);
	}
	return (0);
}
