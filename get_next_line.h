

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

char    *get_next_line(int fd);
char    *ft_strjoin_gnl(char *s1, char *s2);
char    *ft_strdup_gnl(char *s);
char    *ft_strchr_gnl(char *s, int c);
size_t    ft_strlen_gnl(char *s);

#endif
