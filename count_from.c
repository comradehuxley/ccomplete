#include <stdio.h> 

void count_from(int* matrix, int position);

int main(void)
{
  int matrix[10];
  for (int i = 0; i < 10; i++)
    matrix[i] = i;
  
  count_from(matrix, 5);
  return 0;
}

void count_from(int* matrix, int position)
{
  // TODO: implement function get_len to get the length of matrix.
  for (size_t i = position; i < 10; i++)
    printf("%d\n", matrix[i]);
}
