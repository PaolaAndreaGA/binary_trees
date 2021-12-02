#include "binary_trees.h"



/**
 *height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height.
 *Return: If tree is NULL, your function must return 0
 */

int height(const binary_tree_t *tree)
{

	int left_depth;
	int right_depth;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left)
		left_depth = height(tree->left) + 1;
	else
		left_depth = 0;

	if (tree->right)
		right_depth = height(tree->right) + 1;

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
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));

}
