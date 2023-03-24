#include <stdio.h>

int main(void){
  int a, b;
  printf("Odd numbers to: ");
  scanf("%d", &a);
  printf("Odd numbers from 5 to %d: \n", a);

  for(b = 5; b <= a; b++)
    {
    if (b % 2 == 1){
      printf("odd numbers are: %d\n", b);
    }
    }
  return 0;
}