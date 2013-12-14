/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 11:31:45 by rbenjami          #+#    #+#             */
/*   Updated: 2013/12/14 11:42:49 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define BUFF_SIZE 10000

int		main(void)
{
	char	*line;
	char	*line2;

	read(1, line, BUFF_SIZE);
	return (0);
}
