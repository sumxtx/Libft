
#include "dbg.h"
#include "libft.h"

#define NDEBUG

char **init_str_array(int n, ...);
int test_single_split(int number, char *s, char delim, char **expected);
int is_equal_str(int number, char **expected, char **result);

void test_split()
{
  char **expected1;
  expected1 = init_str_array(2, "hello!", NULL);

  test_single_split(1,"xxxhello!",'x', expected1);
  test_single_split(2, "hello!", ' ', expected1);
  test_single_split(3, "xxxxxxxxhello!", 'x', expected1);
  test_single_split(4, "hello!zzzzzzzz", 'z', expected1);
  test_single_split(5, "\11\11\11\11hello!\11\11\11\11", '\11', expected1);


  char **expected2;
  expected2 = init_str_array(1, NULL);

  test_single_split(6, "", 'a', expected2);
  test_single_split(7, "ggggggggggg", 'g', expected2);
  
  char **expected3;
  expected3 = init_str_array(5, "1", "2a,", "3", "--h", NULL);
  test_single_split(8, "^^^1^^2a,^^^^3^^^^--h^^^^", '^', expected3);
  
  char **expected4;
  expected4 = init_str_array(2, "nonempty", NULL);
  test_single_split(9, "nonempty", '\0', expected4);

}

int main(int ac, char **av)
{
  static int ni;
  char **ss;
  if(ac == 1)
  {
    test_split();
  }
  else if (ac == 3)
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
  int flag = 0;
  while(expected[i] != NULL)
  {
    if (strcmp(expected[i], result[i]) != 0)
    {
      pcolor_error("Test: %d\nExpected: %s\n     Got: %s\n\n", number, expected[i], result[i]);
      flag = 1;
    }
    else
    {
      pcolor_ok("Test: %d passed", number);
      printf("%s[expected]:%s%s %s[got]:%s%s\n", BCYN,NC,expected[i],BGRN,NC,result[i]);
    }
    i++;
  }
  return flag;
}
