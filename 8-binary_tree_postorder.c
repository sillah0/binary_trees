#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node (takes an int parameter).
 *
 * Description: The function visits the left subtree first,
 * then the right subtree, and finally the root node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

