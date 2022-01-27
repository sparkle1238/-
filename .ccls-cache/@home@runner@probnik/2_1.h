#include <stdio.h>

int pow(int number, int degree)
{
  int result=1;
  for(int i=degree;i>0;i--)
  {
    result*=number;
  }
  return result;
}


int numCounter(int* a,int i)
{ 
  while (i)
  {
    a[i%10]=1;
    i/=10;
  }
  int count=0;
  for(int index=0; index<10 ;index++)
    {
      if(a[index]!=0) 
      count++;
    }
  return count==2 && a[0]==0 ? 1 : 0;
}


int main()
{
  int n = 0; 
  scanf("%i",&n);
  int a[10]={};
  int answer = 0 ;
  for(int i = pow(10,n-1);i<pow(10,n);i++)
  {
    answer+=numCounter(a,i);
    for(int j=0; j<10 ;j++) a[j]=0;
  }
  printf("\n%i",answer);
}
