#include <stdio.h>

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
