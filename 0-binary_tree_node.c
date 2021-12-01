#include "binary_tree.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *binary_tree_t: pointer to parent's node
 *@parent: is a pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: a pointer to the new node, or NULL on failure
 */



binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *aux_tree = malloc(sizeof(binary_tree_t));

	if (aux_tree == NULL)
		return (NULL);
	aux_tree->n = value;
	aux_tree->parent = parent;
	aux_tree->left = NULL;
	aux_tree->right = NULL;

	return (aux_tree);

}
