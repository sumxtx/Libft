size_t str_s_len(char *str, int start, char delim)
{
  size_t size;
  size = 0;

  size += start;
  while(str[size] != '\0')
    size++;
  
  return size;
}

char *str_n_dup(char *line, char *stg, int line_pos)
{
  char *nline;

  nline = (char *) malloc(line_pos + 1);
  if(!nline)
    return (NULL);
  nline[linepos] = '\0';
  while(line_pos)
  {
    line_pos--;
    nline[line_pos] = stg[line_pos];
  }
  return (nline);
  // dup stg until \n to line
}
strchr
strjoin
int ft_clean()
{
  return (0);
}

