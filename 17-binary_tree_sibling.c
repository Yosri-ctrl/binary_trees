#include "binary_trees.h"
/**
*binary_tree_sibling - binary_tree_sibling
*@node: node to check
*Return: The sibling's value node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
        return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
