#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node (takes an int parameter).
 *
 * Description: The function visits the root node first, then the left subtree,
 * and finally the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    func(tree->n); // Call the function on the current node
    binary_tree_preorder(tree->left, func); // Recur on left subtree
    binary_tree_preorder(tree->right, func); // Recur on right subtree
}
