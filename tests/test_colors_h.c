#include "dbg.h"

void test_colors(void)
{
  printf("%sBRED\n%s",BRED,NC);
  printf("%sRED\n%s",RED,NC);
  printf("%sBGRN\n%s",BGRN,NC);
  printf("%sGRN\n%s",GRN,NC);
  printf("%sYEL\n%s",YEL,NC);
  printf("%sBLU\n%s",BLU,NC);
  printf("%sBMAG\n%s",BMAG,NC);
  printf("%sMAG\n%s",MAG,NC);
  printf("%sCYN\n%s",CYN,NC);
  printf("%sBCYN\n%s",BCYN,NC);
  printf("%sBWHT\n%s",BWHT,NC);
}
int main(void)
{
  test_colors();
  pcolor_error("Whatever Errors %s", "vergalonga");
  pcolor_warn("Whatever Warning %s", "vergalonga");
  return (0);
}
