#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

void simple_test()
{
  ft_printf("");
  ft_printf("\x01\x02\a\v\b\f\r\n");
  ft_printf("%%");
  ft_printf(" %%");
  ft_printf("%%c");
  ft_printf("%%%%%%");
  ft_printf("%%%c", 'x');
}

void test_c()
{
  ft_printf("%c", 'x');
  ft_printf(" %c", 'x');
  ft_printf("%c ", 'x');
  ft_printf("%c%c%c", 'a', '\t', 'b');
  ft_printf("%cc%cc%c", 'a', '\t', 'b');
  ft_printf("%cs%cs%c", 'c', 'b', 'a');
}

void test_s()
{
  ft_printf("%s", "");
  ft_printf("%s", (char *)NULL);
  ft_printf("%s", "some string with %s hehe");
  ft_printf(" %s", "can it handle \t and \n?");
  ft_printf("%sx", "{} al$#@@@^&$$^#^@@^$*((&");
  ft_printf("%s%s%s", "And ", "some", "joined");
  ft_printf("%ss%ss%ss", "And ", "some other", "joined");
}

void test_p()
{
  ft_printf("%p", "");
  ft_printf("%p", NULL);
  ft_printf("%p", (void *)-14523);
  ft_printf("0x%p-", (void *)ULONG_MAX);
  ft_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
}

void test_d()
{
  ft_printf("%d", 0);
  ft_printf("%d", -10);
  ft_printf("%d", -200000);
  ft_printf("%d", -6000023);
  ft_printf("%d", 10);
  ft_printf("%d", 10000);
  ft_printf("%d", 100023);
  ft_printf("%d", INT_MAX);
  ft_printf("%d", INT_MIN);
  ft_printf("dgs%dxx", 10);
  ft_printf("%d%dd%d", 1, 2, -3);
}

void test_i()
{
  ft_printf("%i", 0);
  ft_printf("%i", -10);
  ft_printf("%i", -200000);
  ft_printf("%i", -6000023);
  ft_printf("%i", 10);
  ft_printf("%i", 10000);
  ft_printf("%i", 100023);
  ft_printf("%i", INT_MAX);
  ft_printf("%i", INT_MIN);
  ft_printf("dgs%ixx", 10);
  ft_printf("%i%ii%i", 1, 2, -3);
}

void test_u()
{
  ft_printf("%u", 0);
  ft_printf("%u", -10);
  ft_printf("%u", -200000);
  ft_printf("%u", -6000023);
  ft_printf("%u", 10);
  ft_printf("%u", 10000);
  ft_printf("%u", 100023);
  ft_printf("%u", INT_MAX);
  ft_printf("%u", INT_MIN);
  ft_printf("%u", UINT_MAX);
  ft_printf("dgs%uxx", 10);
  ft_printf("%u%uu%u", 1, 2, -3);
}

void test_x()
{
  ft_printf("%x", 0);
  ft_printf("%x", -10);
  ft_printf("%x", -200000);
  ft_printf("%x", -6000023);
  ft_printf("%x", 10);
  ft_printf("%x", 10000);
  ft_printf("%x", 100023);
  ft_printf("%x", 0xabcdef);
  ft_printf("%x", 0x7fedcba1);
  ft_printf("%x", INT_MAX);
  ft_printf("%x", INT_MIN);
  ft_printf("%x", UINT_MAX);
  ft_printf("dgs%xxx", 10);
  ft_printf("%x%xx%x", 1, 2, -3);
}

void test_X()
{
  ft_printf("%X", 0);
  ft_printf("%X", -10);
  ft_printf("%X", -200000);
  ft_printf("%X", -6000023);
  ft_printf("%X", 10);
  ft_printf("%X", 10000);
  ft_printf("%X", 100023);
  ft_printf("%X", 0xabcdef);
  ft_printf("%X", 0x7fedcba1);
  ft_printf("%X", INT_MAX);
  ft_printf("%X", INT_MIN);
  ft_printf("%X", UINT_MAX);
  ft_printf("dgs%Xxx", 10);
  ft_printf("%X%Xx%X", 1, 2, -3);
}

int main(void)
{
  simple_test();
  test_c();
  test_s();
  test_p();
  test_d();
  test_i();
  test_u();
  test_x();
  test_X();
}
