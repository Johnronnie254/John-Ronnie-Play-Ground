#include <stdio.h>

int main(void) {
  char op;
  int num1, num2, result;

  printf("Ojay's basic calc\n");
  printf("Enter [num1] [+ - * /] [num2]\n");
  scanf("%d %c %d", &num1, &op, &num2);

  switch(op){
    case '+':
      result = num1 + num2;
    break;
    case '-':
     result = num1 - num2;
    break;
    case '*':
      result = num1 * num2;
    break;
    case '/':
      result = num1 / num2;
    break;
    default:
      printf("Invalid operator");
  }
  printf("The result is: %d %c %d = %d", num1, op, num2, result);
  
  return 0;
}