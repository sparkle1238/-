#include <stdio.h>
/*
7. Ваня Штерн очень любит точные расчеты и особенно расстраивается от операции деления, когда сложно посчитать точный ответ. Помогите Ване по заданным натуральным числам A и B найти K-ую цифру после запятой в числе, получившемся в результате деления A на B. (В десятичной системе счислени). Реализуйте функцию int GetDigitInQuotient(int A, int B, int K);, где 1 <= A,B <= 1000, 1 <= L <= 10000000.  Например, 13-ая цифра частного от деления 1 на 6, равна 6. 
*/
int pow(int number, int degree)
{
  int result=1;
  for(int i=degree;i>0;i--)
  {
    result*=number;
  }
  return result;
}

double GetDigitInQuotient(float a,float b,int k)
{
  double answer = a/b;
  int degree = pow(10,2);
  int answer_int = answer * degree;
  answer_int = answer_int%10;
  return answer_int;
}

int main()
{
 float a = 0;
 float b = 0;
 int k = 0;
 scanf("%i %i %i",&a,&b,&k);
 printf("%f",GetDigitInQuotient(a,b,k));
}
