#include "binary_trees.h"
/**
*binary_tree_insert_left - creates a binary tree node at the left
*@parent: pointer to the parent node
*@value: the value to put in the node
*@Return: A pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
    if (parent->left == NULL)
        node->left = NULL;
    else
    {
        node->left = parent->left;
        parent->left->parent = node;
    }
    node->right = NULL;
    parent->left = node;
	return (node);
}
