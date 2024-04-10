#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child of other
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = malloc(sizeof(binary_tree_t));

	if (new_left_node == NULL || parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		new_left_node->n = value;
		new_left_node->left = NULL;
		new_left_node->right = NULL;
		new_left_node->parent = parent;
		parent->left = new_left_node;
		return (new_left_node);
	}
	else
	{
		new_left_node->n = value;
		new_left_node->left = parent->left;
		new_left_node->right = NULL;
		new_left_node->parent = parent;
		parent->left->parent = new_left_node;
		parent->left = new_left_node;
		return (new_left_node);
	}
}
