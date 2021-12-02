#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: pointer to the root node of the tree to measure the depth.
 *Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter;


	if (tree == NULL || tree->parent == NULL)
		return (0);
	counter = binary_tree_depth(tree->parent);
	counter++;
	return (counter);
}
