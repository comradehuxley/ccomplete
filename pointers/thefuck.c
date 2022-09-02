#include <stdio.h>

int main(void)
{
  int *ptr = NULL;
  int i, j;
  i = 0;
  j = 1;

  ptr = &j;

  // NOTE: what's the difference between them?
  /* printf("i - location: %p ; value: %d",(void *) &i, i); */
  /* printf("j - location: %p ; value: %d",(void *) &j, j); */
  printf("i - location: %p ; value: %d\n", &i, i);
  printf("j - location: %p ; value: %d\n", &j, j);

  printf("ptr - location: %p ; value: %p\n", (void *) &ptr, ptr);
  return 0;
}
