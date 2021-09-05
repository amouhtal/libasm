#ifndef LIBASM_H
# define LIBASM_H
# include <unistd.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
// ​
ssize_t         ft_read(int a, char *buff, int buf_size);
// ssize_t         ft_write(int a, char *str, int len);
size_t             ft_strlen(char *str);
char            *ft_strcpy(char *dis, char *src);
char            *ft_strdup(char *str);
int             ft_strcmp(char *s1, char *s2);
#endif