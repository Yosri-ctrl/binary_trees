#include "binary_trees.h"
/**
*binary_tree_depth - find the depth of a node
*@tree: tree to check
*Return: The depth from 0 to position of a node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
