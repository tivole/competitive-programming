// (c) Tivole

// 7411

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char equation[6];
  gets(equation);
  int a, b, x, ans;

  if(equation[0] == 'x'){
    a = (int) equation[4] - 48;
    b = (int) equation[2] - 48;
    if(equation[1] == '+')
      ans = a - b;
    else
      ans = a + b;
  }else if(equation[2] == 'x'){
    a = (int) equation[4] - 48;
    b = (int) equation[0] - 48;
    if(equation[1] == '+')
      ans = a - b;
    else
      ans = b - a;
  }else{
    a = (int) equation[0] - 48;
    b = (int) equation[2] - 48;
    if(equation[1] == '+')
      ans = a + b;
    else
      ans = a - b;
  }
  printf("%d\n", ans);

  return 0;
}