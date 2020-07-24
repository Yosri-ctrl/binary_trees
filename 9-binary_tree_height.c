#include "binary_trees.h"
/**
*binary_tree_height - binary_tree_height
*@tree: tree to check
*Return: Return the height of a tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);
	while (tree->right != NULL)
	{
		count_right++;
		tree = tree->right;
	}
	while (tree->left != NULL)
	{
		count_left++;
		tree = tree->left;
	}
	if (count_right > count_left)
		return (count_right + 1);
	else
		return (count_left + 1);
}
