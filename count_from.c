#include <stdio.h> 

void count_from(int* matrix, int position);
int len(int matrix);

int main(void)
{
  int matrix[10];
  for (int i = 0; i < 10; i++)
    matrix[i] = i;

  /* printf("%zu", sizeof(matrix) / sizeof(matrix[0])); */
  printf("%zu\n", sizeof(matrix) / sizeof(matrix[0]));
  printf("%d", len(*matrix));
  return 0;
}
