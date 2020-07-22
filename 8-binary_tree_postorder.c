#include "binary_trees.h"
/**
*binary_tree_postorder - binary_tree_postorder
*@tree: node to check
*@func: func
*Return: Return 1 if node is a leaf, otherwise 0
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
