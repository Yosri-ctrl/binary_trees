#include "binary_trees.h"
/**
*binary_tree_inorder - binary_tree_inorder
*@node: node to check
*@Return: Return 1 if node is a leaf, otherwise 0
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (func == NULL || tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
    func(tree->n);
	binary_tree_inorder(tree->right, func);
}
