/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:27:36 by fmoulin           #+#    #+#             */
/*   Updated: 2025/05/21 15:02:48 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#	define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}	t_list;

void	copy_str(t_list *list, char *str);
int		len_to_newline(t_list *list);
void	free_them_all(t_list **list, t_list *clean_node, char *buf);
t_list	*find_last_node(t_list *list);
void	clean_list(t_list **list);
char	*get_line_1(t_list *list);
void	append(t_list **list, char *buf);
void	create_list(t_list **list, int fd);
char	*get_next_line(int fd);
int		is_newline(t_list *list);


#endif