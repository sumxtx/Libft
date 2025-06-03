#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

void test_debug()
{
  debug("This is a debug message");
}

void test_debug_args(char *msg)
{
  debug("This is an argument %s", msg);
}

void test_log_error()
{
  log_err("This message go to stderror");
}

void test_log_error_args(int i, char *file)
{
  log_err("There are %d problems in %s", i, file);
}

void test_log_warn()
{
  log_warn("You can safely ignore this.");
}

void test_log_info()
{
  log_info("Well");
}

int test_check(char *filename)
{
  FILE *input = NULL;
  char *block = NULL;

  block = malloc(100);
  check_mem(block);

  input = fopen(filename, "r");
  check(input, "Failed to open %s", filename);

  free(block);
  fclose(input);

  return 0;

error:
  if(block) free(block);
  if(input) fclose(input);
  return -1;
}

int test_check_mem()
{
  char *test = NULL;
  check_mem(test);

  free(test);
  return 1;

error:
  return -1;
}

int test_check_debug()
{
  int i = 0;
  check_debug(i != 0, "Oops, i was 0. %s", "adsfasdf");
  return 0;

error:
  return -1;
}

int test_sentinel(int code)
{
  char *temp = malloc(100);
  check_mem(temp);

  switch(code)
  {
    case 1:
      log_info("case 1");
      break;
    default:
      sentinel("shouldm't run");
  }
  free(temp);
  return 0;

error:
  if(temp)
    free(temp);
  return -1;
}

int main(void)
{
  test_debug();
  test_debug_args("passed as parameters");
  test_log_error_args(7, "test.c");
  test_log_info();

  //check(test_check("ex19.c") == 0, "failed with ex19.c");

  check(test_sentinel(100) == -1, "test_sentinel failed.");
  check(test_sentinel(1) == 0, "test_sentinel failed.");

  check(test_check_mem() == -1, "test_check_mem failed.");
  check(test_check_debug() == -1, "test_check_debug failed.");

error:
  return 1;
}
