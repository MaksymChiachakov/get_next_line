

#include "get_next_line.h"

static char *extract_line(char *stash)
{
    char    *line;
    int		i;

    if (!stash || !stash[0])
        return (NULL);
    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    while (stash[i] == '\n')
        i++;
    line = malloc(i + 1);
    if (!line)
        return (NULL);
    i = 0;
    while (stash[i] && stash[i] != '\n')
    {
        line[i] = stash[i];
        i++;
    }
    if (stash[i] == '\n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return (line);
}

static char *clean_stash(char *stash)
{
    char	*newstash;
    int		i;
    int		j;

    i = 0;
    while(stash[i] && stash[i] != '\n')
        i++;
    if (!stash[i])
	{
        free(stash);
		return (NULL);
	}
	i++;
    if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
    newstash = malloc(ft_strlen_gnl(stash + i) + 1);
    if (!newstash)
        return (NULL);
    j = 0;
    while (stash[i])
        newstash[j++] = stash[i++];
    newstash[j] = '\0';
    free(stash);
    return(newstash);
}

char    *get_next_line(int fd)
{
    static char	*stash;
    char		buffer[BUFFER_SIZE + 1];
    char		*line;
    ssize_t		bytes;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    bytes = 1;
    while (!ft_strchr_gnl(stash, '\n') && bytes > 0)
    {
        bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes < 0)
            return (free(stash), stash = NULL, NULL);
        buffer[bytes] = '\0';
        stash = ft_strjoin_gnl(stash, buffer);
        if (!stash)
            return (NULL);
    }
    line = extract_line(stash);
    stash = clean_stash(stash);
    return (line);
}
