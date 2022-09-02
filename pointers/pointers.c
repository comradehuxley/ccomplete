#include <stdio.h>

int main(void)
{
  // NOTE: segmentation fault, this is a null pointer don't store any
  // C object. Therefore, we cannot deference it.
  // NOTE: another segmentation fault, we cannot store a pointer pointing to itself.
  // NOTE: dereferencing operator = *
  // NOTE: %p format string to pointer. (nil) when pointer is null and 0xsomething when not
  int *k;
  int i = 0;
  k = NULL; // NOTE: NULL macro guarantees the pointer is set to null
  k = &i;
  /* k = k; */
  /* printf("%d", *k); */
  printf("%p", k);

  return 0;
}
