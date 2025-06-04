
#include "dbg.h"
#include "libft.h"

#define NDEBUG

char **init_str_array(int n, ...);
int test_single_split(int number, char *s, char delim, char **expected);
int is_equal_str(int number, char **expected, char **result);

int test_split()
{
  char **expected = init_str_array(2, "hello!", NULL);
  return (test_single_split(1,"xxxhello!",'x', expected));
}

int main(int ac, char **av)
{
  static int ni;
  char **ss;
  if(ac == 1)
  {
    test_split();
  }
  if (ac == 3)
  {
    int i = 0;
    ss = ft_split(av[1], atoi(av[2]));
    ni = ft_strlen(*ss);
    while(i < ni)
    {
      //ft_printf("%s", ss[i]);
      printf("%s", ss[i]);
      free(ss[i]);
      i++;
    }
    free(ss[i]);
    free(ss);
  }
  else
  {
    //ft_print("");
    printf("l");
  }
}

char **init_str_array(int n, ...)
{
  va_list args;
  char **result = ft_calloc(n, sizeof(char *));

  va_start(args, n);
  for(int i = 0; i < n; i ++)
    result[i] = va_arg(args, char *);

  va_end(args);
  return result;
}

int test_single_split(int number, char *s, char delim, char **expected)
{
  char **result = ft_split(s, delim);

  int flag = 0;
  flag = is_equal_str(number, expected, result);
  if(flag)
    pcolor_error();
  return flag;
}

int is_equal_str(int number, char **expected, char **result)
{
  int i = 0;
  bool same = true;
  int flag = 0;
  while(expected[i] != NULL)
  {
    if (strcmp(expected[i], result[i]) != 0)
      same = false;
    if(!same)
    {
      pcolor_error("Test: %d\nExpected: %s\n     Got: %s\n", number, expected[i], result[i]);
      flag = 1;
    }
    i++;
  }
  return flag;
}
