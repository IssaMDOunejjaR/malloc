#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *ptr = malloc(1);

  ptr[128] = 'a';

  return 0;
}
