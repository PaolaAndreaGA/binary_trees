#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_counter;
	size_t r_counter;

	if (tree == NULL)
		return (0);

	l_counter = binary_tree_size(tree->left);
	l_counter++;
	r_counter = binary_tree_size(tree->right);
	r_counter++;
	return (l_counter + r_counter - 1);
}
