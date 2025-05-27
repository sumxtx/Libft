#include "get_next_line.h"

char *get_next_line(int fd)
{
  int         eflag;
  char        *line;
  char        rbuffer[BUFFER_SIZE + 1];
  static char *stg;

  if(fd < 0 || BUFFER_SIZE <= 0 || (read(fd, 0, 0) < 0))
    return (NULL/*gnl_clean*/);

  eflag = 1;
  line = NULL;
  if(!stg) // first read?
    eflag = read_to_stg(fd, rbuffer, &stg);

  if(eflag >= 0)  // look for line o return whatever we read without line
    line = line_parser(line, stg);

  if(eflag < 0 || (line == NULL))
    return(NULL/*gnl_clean*/);

  return line;
}

int read_to_stg(int fd, char *rbuffer, char **stg)
{
  int eflag;
  eflag = -1;
  // read to rbuffer
  while(eflag != 0)
  {
    eflag = read(fd, rbuffer, BUFFER_SIZE);
    if(eflag < 0)
      return (-1); //fail
    rbuffer[eflag] = '\0';
    *stg = gnl_strjoin(*stg, rbuffer);
    if(stg == NULL)
      return (-1); //fail
    eflag = gnl_strchr(rbuffer, CHR);
    if(eflag)
      return(eflag); // line found !!
  }
  return (0); //EOF
}

char *line_parser(char *line, char *stg)
{
  int eflag;
  eflag = gnl_strchr(stg, CHR);
  if(eflag)
  {
    line = gnl_strndup(line, stg, eflag); // dup stg to line until line
    if(!line)
      return (NULL);
    stg = cleant_stg(stg, eflag);
  }
  else
  {
    line = stg;
    free(stg);
    stg = NULL;
  }
  return (line);
}

char *cleant_stg(char *stg, int line_pos)
{
  char *new;
  int new_size;
  int i;

  new_size = gnl_strlen((stg + line_pos));
  new = (char *) malloc(new_size + 1);
  if(!new)
    return (NULL);
  new[new_size] = '\0';
  i = 0;
  while(stg[i] != '\0' && new_size)
  {
    new[i] = stg[line_pos + i];
    i++;
    new_size--;
  }
  free(stg);
  stg = NULL;
  return new;
}

int gnl_clean()
{
  return (0);
}
