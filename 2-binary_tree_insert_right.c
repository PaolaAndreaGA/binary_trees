#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: is a pointer to the node to insert the right-child
 *@value: is the value to store in the new node
 *Return: a pointer or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *aux_right;

	if (parent == NULL)
		return (NULL);
	aux_right = malloc(sizeof(binary_tree_t));
	if (aux_right == NULL)
		return (NULL);

	aux_right->n = value;
	aux_right->parent = parent;
	if (parent->left == NULL)
		aux_right->right = NULL;
	else
	{
		aux_right->right = parent->right;
		parent->right->parent = aux_right;

	}
	parent->right = aux_right;
	aux_right->left = NULL;
	return (aux_right);
}
