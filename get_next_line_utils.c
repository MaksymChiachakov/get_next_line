#include "get_next_line.h"

size_t  ft_strlen_gnl(char *s)
{
    size_t  i;

    i = 0;
    if (!s)
        return (0);
    while (s[i])
        i++;
    return (i);
}

char    *ft_strchr_gnl(char *s, int c)
{
    if (!s)
        return (NULL);
    while(*s)
    {
        if (*s == (char)c)
            return (s);
        s++;
    }
    if (c == '\0')
        return (s);
    return (NULL);
}

char    *ft_strdup_gnl(char *s)
{
    size_t  i;
    size_t  len;
    char    *dup;

    if (!s)
        return (NULL);
    len = ft_strlen_gnl(s);
    dup = malloc(len + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

char    *ft_strjoin_gnl(char *s1, char *s2)
{
    size_t  i;
    size_t  j;
    char    *res;

    if (!s1 && s2)
        return (ft_strdup_gnl(s2));
    if (!s2)
        return (s1);
    res = malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
    if (!res)
        return (NULL);
    i = -1;
    while (s1[++i])
        res[i] = s1[i];
    j = 0;
    while (s2[j])
        res[i++] = s2[j++];
    res[i] = '\0';
    free(s1);
    return (res);
}