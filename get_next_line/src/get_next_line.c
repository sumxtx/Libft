#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

char *get_next_line(int fd)
{
  int         eflag;
  char        *line;
  char        rbuffer[BUFFER_SIZE + 1];
  static char *stg;

  if(fd < 0 || BUFFER_SIZE <= 0 || (read(fd, 0, 0) < 0))
    return (NULL,/*ft_clean*/);

  eflag = 1;
  if(!stg) // first read?
    eflag = read_to_stg(fd, line, rbuffer, stg);

  if(eflag >= 0)  // look for line o return whatever we read without line
    eflag = line_parser(line, stg);

  if(eflag < 0) // error
    eflag = clean_stg(line, rbuffer, stg);

  if(eflag < 0 || (line == NULL))
    return(NULL,/*ft_clean*/);

  return line;
}

int read_to_stg(int fd, int *eflag, char *rbuffer, char *stg)
{
  int found;
  found = 0;
  // read to rbuffer
  while(&eflag != 0)
  {
    &eflag = read(fd, rbuffer, BUFFER_SIZE);
    if(eflag < 0)
      return (eflag); //fail
    rbuffer[BUFFER_SIZE] = '\0';
    stg = ft_strjoin(stg, rbuffer);
    if(stg == NULL)
      return (-1); //fail
    found = _strchr(rbuffer, CHR);
    if(found)
      return(1) // line found !!
  }
  return (0); //EOF
}

int line_parser(char *line, char *stg)
{
  int line_pos;
  int flag_line;

  line_pos = 0; 
  flag_line = 0;
  while(stg[line_pos] != '\0')
  {
    if(stg[line_pos] == CHR) // habemus linea
    {
      flag_line = 1;
      break ;
    }
    line_pos++;
  }
  if(!str_n_dup(line, stg, line_pos)) // dup stg to line until line
    return (-1);
  if(flag_line == 1)
    stg = cleant_stg(line, stg, line_pos);
  else 
    //clean storage
  return(0);
}

int cleant_stg(char *stg, int line_pos)
{
  char *new;
  int new_size;

  new_size = str_s_len(stg, line_pos, '\0');
  new = (char *) malloc()



}

