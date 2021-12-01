#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: is a pointer to the node to insert the left-child
 *@value: is the value to store in the new node
 *Return: a pointer or NULL on failure or if parent is NULL
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *aux_left;

	if (parent == NULL)
		return (NULL);
	aux_left = malloc(sizeof(binary_tree_t));
	if (aux_left == NULL)
		return (NULL);

	aux_left->n = value;
	aux_left->parent = parent;
	if (parent->left == NULL)
		aux_left->left = NULL;
	else
	{
		aux_left->left = parent->left;
		parent->left->parent = aux_left;

	}
	parent->left = aux_left;
	aux_left->right = NULL;
	return (aux_left);
}
