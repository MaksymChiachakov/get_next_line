/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:31:17 by mchiacha          #+#    #+#             */
/*   Updated: 2025/11/15 17:21:12 by mchiacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char		*get_next_line(int fd);
char		*ft_strjoin_gnl(char *s1, char *s2);
void		*ft_memcpy(void	*dest, const void *src, size_t n);
char		*ft_strdup_gnl(char *s);
char		*ft_strchr_gnl(char *s, int c);
size_t		ft_strlen_gnl(char *s);

#endif
