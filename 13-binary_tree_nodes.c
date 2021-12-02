#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t n_counter;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		n_counter++;
	else if (n_counter == 0 && (tree->left != NULL ||
				     tree->right != NULL))
		n_counter++;
	n_counter += (binary_tree_nodes(tree->left) +
		      binary_tree_nodes(tree->right));
	return (n_counter);
}
