#include <stdio.h>
/*
11. Написать функцию unsigned int ReverseNumber(const unsigned int),  которая возвращает число, которое получится после записи цифр числа number  в обратном порядке. 
*/
 int ReverseNumber(  int num )
{
  int  m = 0;
  while (num > 0) 
  {
    m = m*10 + num%10;
    num = num/10;
  }
  return m;
}

int main()
{
  int  num = 0;
  scanf("%i",&num);
  printf("%i",ReverseNumber(num));
}
