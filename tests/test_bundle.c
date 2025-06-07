
#include "libftall.h"
#include <assert.h>

int main(void)
{
  int fd = open("libftall.h", O_RDONLY);
  assert(fd > 0);
  ft_printf("%s", "Test");
  ft_printf("%s", get_next_line(fd));
}
