#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isEven(int number) { return number % 2 == 0; }

int main() {
  int a[8], b[8];
  int evenCount = 0, oddCount = 0;

  srand(time(0));

  printf("Первая последовательность (a): ");
  for (int i = 0; i < 8; i++) {
    a[i] = rand() % 100;
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("Вторая последовательность (b): ");
  for (int i = 0; i < 8; i++) {
    b[i] = rand() % 100;
    printf("%d ", b[i]);
  }
  printf("\n");

  for (int i = 0; i < 8; i++) {
    if (isEven(a[i])) {
      evenCount++;
    }
  }

  for (int i = 0; i < 8; i++) {
    if (!isEven(b[i])) {
      oddCount++;
    }
  }

  printf("Количество четных чисел в первой последовательности: %d\n",
         evenCount);
  printf("Количество нечетных чисел во второй последовательности: %d\n",
         oddCount);

  return 0;
}