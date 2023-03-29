#include <stdio.h>

int main (){
  int x, y;
  printf("Print multiplication of: ");
  scanf("%d", &y);
  
  for (x = 5; x <= y; x++){
    printf("%d * %d = %d\n", y, x, (y*x));
  }
  return 0;
}