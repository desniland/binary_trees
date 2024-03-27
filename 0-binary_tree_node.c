#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: is a pointer to the parent node.
 * @value: Value of the the new node.
 * Return: returns a pointer to the new node or NULL if non.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
