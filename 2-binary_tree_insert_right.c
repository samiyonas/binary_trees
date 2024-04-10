#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child of other
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = malloc(sizeof(binary_tree_t));

	if (new_right_node == NULL || parent == NULL)
	{
		return (NULL);
	}
	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->left = NULL;
	new_right_node->right = NULL;

	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	parent->right = new_right_node;
	return (new_right_node);
}
