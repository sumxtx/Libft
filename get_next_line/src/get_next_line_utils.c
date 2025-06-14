#include "get_next_line.h"

size_t gnl_strlen(char *s)
{
  size_t size;
  size = 0;

  if(!s)
    return size;
  while(s[size] != 0)
    size++;
  return size;
}

void gnl_memcpy(char *dst, char *src, size_t offset, size_t len)
{
  size_t i;
  size_t pos;
  
  i = 0;
  pos = 0;
  pos += offset;
  while(src[i] != '\0' && len)
  {
    dst[pos] = src[i];
    i++;
    pos++;
    len--;
  }
}

char *gnl_strjoin(char *dst, char *src)
{
  char *new;
  size_t dst_size;
  size_t src_size;

  dst_size = gnl_strlen(dst);
  src_size = gnl_strlen(src);
  new = (char *) malloc(dst_size + src_size + 1);
  if(!new)
    return (NULL);
  new[dst_size + src_size] = '\0';
  if(dst != NULL)
  {
    gnl_memcpy(new, dst, 0, dst_size);
    gnl_memcpy(new, src, dst_size, src_size);
    free(dst);
    dst = NULL;
  }
  else
    gnl_memcpy(new, src, 0, src_size);
  return (new);
}

int gnl_strchr(char *str, int chr)
{
  size_t pos;
  
  pos = 0;
  while(str[pos] != '\0')
  {
    if(str[pos] == chr)
      return pos;
    pos++;
  }
  return -1;
}

char *gnl_strndup(char *nline, char *stg, int line_pos)
{
  nline = (char *) malloc(line_pos + 1);
  if(!nline)
    return (NULL);
  nline[line_pos] = '\0';
  while(line_pos)
  {
    line_pos--;
    nline[line_pos] = stg[line_pos];
  }
  return (nline);
  // dup stg until \n to line
}
