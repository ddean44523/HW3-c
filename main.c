#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n) {
  if(n == 0) {
    return 0;
  }
  else {
    int l = n % 10;
    return l + digit_sum(n / 10);
  }
}
int main(void) {
  char *userIn;
  userIn = readline("Enter an int: ");
  int digSum;
  digSum = atoi(userIn);
  int answer;
  answer = digit_sum(digSum);
  printf("sum of digits of %d is %d.\n", digSum, answer);
  return 0; 
}