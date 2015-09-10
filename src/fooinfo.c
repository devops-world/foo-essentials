#include "fooconfig.h"
#include "barconfig.h"
#include <stdio.h>

int main()
{
  printf("foo %s\n", FOO_VERSION);
  printf(" bar %s\n", BAR_VERSION);
  return 0;
}
