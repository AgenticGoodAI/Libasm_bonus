#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct s_list
{
	void*           data;
	struct s_list*  next;
} t_list;



extern	size_t  ft_strlen(char *str);
extern	char*   ft_strcpy(char *restrict dst, const char *restrict src);
extern  int     ft_strcmp(const char *s1, const char *s2);
extern	char*   ft_strdup(const char *s1);
extern  ssize_t ft_read(int fd, char *buf, size_t count);
extern int      ft_list_size(t_list *begin_list);
void            test_list_size(char **argv);

