/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheiden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 17:57:17 by maheiden          #+#    #+#             */
/*   Updated: 2018/12/10 19:11:00 by maheiden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include "libft/includes/libft.h"

# define BUFF_SIZE 10

typedef struct	s_file
{
	char			*data;
	int				fd;
	struct s_file	*next;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
