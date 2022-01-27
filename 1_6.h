#include <stdio.h>

/*
6. Ваня Штерн купил шоколадку размером MxN долек. Определите, можно ли от шоколадки отломить ровно K долек. Реализуйте функцию bool Chocolate(int, int, int);, параметры которой - это значения M,N,K соответственно. 
*/
int Chocolate(int m, int n, int k)
{
  return  (m*n)%k == 0 ? 1 : 0 ;
}


int main()
{
  printf("Введите размер шоколадки MxA и количество долек K:");
  int m=0,n=0,k=0;
  scanf("%i %i %i", &m,&n,&k);
  printf("%i", Chocolate(m,n,k));
  return 0;
}