#include <stdio.h>
/*
3. Ваня Штерн готовится к новому году, где ему предстоит делать коктейли. Ваня знает, что коктейль - это напиток, состоящий из нескольких, как минимум двух. Помогите Ване определить, сколько различных коктейлей он сможет приготовить, если у него есть N напитков. Реализуйте функцию unsigned GetCocktailCount(unsigned N), где N - количество напитков. N < 31. Например, из трех напитков можно сделать 4 разных коктейля, из четырех напитков - уже 11. 
*/
int factorial (int n)
{
  return (n < 2) ? 1 : n * factorial (n - 1);
}

int GetCocktailCount(int n)
{
  int k=2;
  int sum =0;
  while (k<=n)
  {
    sum=sum+(factorial(n))/(factorial(n-k)*factorial(k));
    k++;
  }
  return sum;
}

int main()
{
  int n = 0;
  int k=3;
  scanf("%i",&n);
  printf("%i",GetCocktailCount(n));
}
