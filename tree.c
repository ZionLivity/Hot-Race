/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 11:43:32 by rbenjami          #+#    #+#             */
/*   Updated: 2013/12/14 12:17:51 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tree.h"

int		cmpstr(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

t_node	*init_node(t_node *elem, const char *keyword, char *value)
{
	elem = (t_node *)malloc(sizeof(t_node));
	elem->keyword = keyword;
	elem->value = value;
	elem->left = NULL;
	elem->right = NULL;
	return (elem);
}

void	add_node(t_node **tree, const char *keyword, char *value)
{
	t_node	*tmpNode;
	t_node	*tmpTree;
	t_node	*elem;

	elem = init_node(elem, keyword, value);
	if ((tmpTree = *tree))
	{
		while (tmpTree)
		{
			tmpNode = tmpTree;
			if (cmpstr(keyword, tmpTree->keyword) > 0)
			{
				tmpTree = tmpTree->right;
				if (!tmpTree)
					tmpNode->right = elem;
			}
			else
			{
				tmpTree = tmpTree->left;
				if (!tmpTree)
					tmpNode->left = elem;
			}
		}
	}
	else
		*tree = elem;
}

int		search_node(t_node *tree, const char *keyword)
{
	while (tree)
	{
		if (!cmpstr(keyword, tree->keyword))
			return (1);
		if (cmpstr(keyword, tree->keyword) > 0)
			tree = tree->right;
		else
			tree = tree->left;
	}
	return (0);
}

void	clear_tree(t_node **tree)
{
	t_node	*tmpTree;

	tmpTree = *tree;
	if (!tree)
		return ;
	if (tmpTree->left)
		clear_tree(&tmpTree->left);
	free(tmpTree);
	if (tmpTree->right)
		clear_tree(&tmpTree->right);
	*tree = NULL;
}
