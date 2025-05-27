#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
  // Open file get file descriptor and hand error
  int fd = open("./array.c", O_RDONLY);
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
