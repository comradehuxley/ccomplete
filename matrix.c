int main(void) {
  int matrix[10];
  for (int i = 0; i < 100; i++) {
    matrix[i] = i; // segmentation fault (the size of the matrix was tresspassed)
  }
  return 0;
}
