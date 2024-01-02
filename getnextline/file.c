#include <stdio.h>
#include <stdlib.h>

int ft_strchr(char *s,char c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return (i);
}

char *joinreand(char *save_str,char *buffer,int fd)
{
    int read_n;
    while (1)
    {
        read_n = read(fd,buffer,BUFFER_SIZE);
        labs
    }
}

char *get_next_line(fd)
{
    static char *save_str;
    char buffer;
    char *save_lines;
    char *next_lines;
    int i;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = malloc(BUFFER_SIZE * sizeof(char) + 1);
    save_str =  
}
