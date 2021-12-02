#include "binary_trees.h"



/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height.
 *Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_depth;
	size_t right_depth;


	if (tree == NULL)
		return (0);

	if (tree->left)
		left_depth = binary_tree_height(tree->left) + 1;
	else
		left_depth = 0;

	if (tree->right)
		right_depth = binary_tree_height(tree->right) + 1;

	else
		right_depth = 0;

	if (left_depth > right_depth)
		return (left_depth);
	else
		return (right_depth);
}




/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to root node of the tree to measure the balance factor
 *Return: If tree is NULL, return 0
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));

}
