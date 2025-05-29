#include "get_next_line.h"

char *get_next_line(int fd)
{
  int         eflag;
  char        *line;
  char        rbuffer[BUFFER_SIZE + 1];
  static char *stg;

  if(fd < 0 || BUFFER_SIZE <= 0 || (read(fd, 0, 0) < 0))
    return (NULL/*gnl_clean*/);
  line = NULL;
  if(stg) // si hay un stg is not the first read
  {
    eflag = gnl_strchr(stg, CHR);
    if(eflag >= 0)
    {
      line = line_parser(line, &stg, eflag);
      return (line);
    }
  }
  eflag = read_to_stg(fd, rbuffer, &stg);
  if(eflag < 0)
    /*error*/return (NULL);
  line = line_parser(line, &stg, eflag);
  /* if ! line
   * error */
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
    if(*stg == NULL)
      return (-1); //fail
    eflag = gnl_strchr(*stg, CHR);
    if(eflag)
      return(eflag); // line found !!
  }
  return (0); //EOF
}

char *line_parser(char *line, char **stg, int eflag)
{
  line = gnl_strndup(line, *stg, eflag); // dup stg to line until line
  if(!line)
    return (NULL);
  *stg = cleant_stg(*stg, eflag);
  return (line);
}

char *cleant_stg(char *stg, int line_pos)
{
  int i;
  int new_size;
  char *new;

  line_pos++;
  new_size = gnl_strlen((stg + line_pos));
  new = (char *) malloc(new_size + 1);
  i = 0;
  while(stg[i] != '\0' && new_size)
  {
    new[i] = stg[line_pos + i];
    i++;
    new_size--;
  }
  new[i] = '\0';
  free(stg);
  stg = NULL;
  return new;
}

int gnl_clean()
{
  return (0);
}
