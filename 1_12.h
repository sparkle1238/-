#include <stdio.h>
//K=[N /(5^1)] +  [N /(5^2)] + [N /(5^3)] +...........+  [N /(5^n)]
//K количество нулей в конце факторяла, N само число  факториала, а n степень числа 5.
//N /(5^n) деление пройзводится до того, пока  резултат от целечисленного деления не станет ровно или меньше единицы

/*
12. Реализуйте функцию int ZerosCount(int num);, которая вернет количество нулей в конце факториала числа num. num не превышает 106 
*/
int ZerosCount(int num)
{
  int counter = 0 ;
  int d=5;
  while (d<=num)
  {
    counter +=num/d;
    d*=5;
  }
  return counter;
}
int main()
{
  double num = 0;
  scanf("%lf",&num);
  printf("%i",ZerosCount(num));
}
