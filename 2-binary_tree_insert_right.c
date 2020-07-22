#include "binary_trees.h"
/**
*binary_tree_insert_right - creates a binary tree node at the right
*@parent: pointer to the parent node
*@value: the value to put in the node
*Return: A pointer to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	if (parent->right == NULL)
		node->right = NULL;
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	node->left = NULL;
	parent->right = node;
	return (node);
}
