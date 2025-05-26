#ifndef GET_NEXT_LINE_H 
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 42
# define CHR 10
# define END 0

int   gnl_clean();
int   read_to_stg(int fd, char *rbuffer, char *stg);
char  *line_parser(char *line, char *stg);
char  *cleant_stg(char *stg, int line_pos);
char  *get_next_line(int fd);



int       gnl_strchr(char *str, int chr);
char      *gnl_strjoin(char *dst, char *src);
char      *gnl_strndup(char *line, char *stg, int line_pos);
void      gnl_memcpy(char *dst, char *src, size_t offset, size_t len);
size_t    gnl_strlen(char *s);

#endif
