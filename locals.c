#include <stdio.h>

int main(void) {
  {
    int i = 0;
  }
  printf("%d", i); // error: i is not declared locally
  return 0;
}
