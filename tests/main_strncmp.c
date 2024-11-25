#include "libft.h"
#include <stdio.h>

int main(void)
{
  char s1[50] = "HelloVorrrldwe";
  char s2[50] = "HellpRicheddde";
  
  int ret = ft_strncmp(s1, s2, 5);
  int ogret = strncmp(s1, s2, 5);
  printf("ret: %d\n. og: %d\n", ret, ogret);
  return (0);
}
