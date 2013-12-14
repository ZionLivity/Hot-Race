/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 11:43:40 by rbenjami          #+#    #+#             */
/*   Updated: 2013/12/14 11:59:20 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TREE_H
 #define TREE_H
 #include <stdlib.h>

typedef struct		s_node
{
	const char		*keyword;
	char			*value;
	struct s_node	*left;
	struct s_node	*right;
}					t_node;

t_node	*init_node(t_node *elem, const char *name);
t_node	*add_node(t_node *node, const char *name);
int		search_node(t_node *tree, const char *name);
void	clear_tree(t_node **tree);

#endif /* !TREE_H */
