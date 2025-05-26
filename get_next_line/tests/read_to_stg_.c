#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

size_t ft_strlen(char *s)
{
  if(!s)
    return 0;
  size_t size;
  size = 0;
  while(s[size] != 0)
    size++;
  return size;
}

void ft_memcpy(char *dst, char *src, size_t offset, size_t len)
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

char *ft_strjoin(char *dst, char *src)
{
  char *new;
  size_t dst_size;
  size_t src_size;

  dst_size = ft_strlen(dst);
  src_size = ft_strlen(src);
  new = (char *) malloc(dst_size + src_size + 1);
  if(!new)
    return (NULL);
  if(dst_size && src_size == 0)
  {
    new[0] = '\0';
    return(new);
  }
  new[dst_size + src_size] = '\0';
  if(dst != NULL)
  {
    ft_memcpy(new, dst, 0, dst_size);
    ft_memcpy(new, src, dst_size, src_size);
    free(dst);
  }
  else
    ft_memcpy(new, src, 0, src_size);
  return (new);
}

int ft_strchr(char *str, int chr)
{
  size_t pos;
  
  pos = 0;
  while(str[pos] != '\0')
  {
    if(str[pos] == chr)
      return (1);
    pos++;
  }
  return (0);
}

int read_to_stg(int fd, int *eflag, char *rbuffer, char *stg)
{
  int found;
  found = 0;
  // read to rbuffer
  while(eflag != 0)
  {
    *eflag = read(fd, rbuffer, BUFFER_SIZE);
    printf("\neflag read: %d\n", *eflag);
    if(*eflag < 0)
      return (-1); //fail
    rbuffer[*eflag] = '\0'; // or [&eflag?]
    printf("%s", rbuffer);
    stg = ft_strjoin(stg, rbuffer);
    printf("\n%s", stg);
    if(stg == NULL)
      return (-1); //fail
    found = ft_strchr(rbuffer, CHR);
    if(found)
      return(found); // line found !!
  }
  return (0); //EOF
}


int main(void)
{
  // Open file get file descriptor and hand error
  int fd = open("../includes/get_next_line.h", O_RDONLY);
  if(fd == -1)
    return -1;
  printf("\nfd: %d\n", fd);
  int eflag = 1;
  char rbuffer[BUFFER_SIZE + 1];
  static char *stg;
  printf("%d", read_to_stg(fd, &eflag, rbuffer, stg));
  return (0);
}
