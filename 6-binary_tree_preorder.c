#include "binary_trees.h"
/**
*binary_tree_preorder - binary_tree_preorder
*@node: node to check
*@Return: Return 1 if node is a leaf, otherwise 0
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (func == NULL || tree == NULL)
		return;

    func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
