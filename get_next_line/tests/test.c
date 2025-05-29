#include <stdio.h>
#include "get_next_line.h"

int main(int ac, char **av)
{
  if (ac != 2)
  {
    printf("./test <file path>");
    return -1;
  }
  
  // Open file get file descriptor and hand error
  int fd = open(av[1], O_RDONLY);
  if(fd == -1)
  {
    printf("fd: %d\n", fd);
      return -1;
  }

  // Consecutive calls to gnl from main
  int getc;
  char *line; // Not starting this shit to null is a bug?
  while(line != NULL)
  {
    line = get_next_line(fd);
    printf("%s", line);
    while(getc != CHR)
    {
      getc = getchar();
    }
    getc = 'a';
  }
  return 0;
}
