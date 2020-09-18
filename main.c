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
  double digSum;
  digSum = atof(userIn);
  int digSumInt;
  digSumInt = (int) digSum;
  int answer;
  answer = digit_sum(digSumInt);
  printf("sum of digits %d is %d.", digSumInt, answer);
  return 0;
}