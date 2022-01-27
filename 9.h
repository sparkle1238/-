#include <stdio.h>
/*
9. Ваня Штерн упражняется в переводе чисел в двоичную систему и обратно. Для этого он придумывает число, представляет его в двоичном виде, далее по циклу сдвигает биты вправо. Очевидно, что начиная с некоторого сдвига числа начнут повторяться. Среди таких чисел Ваня ищет максимальное. Напишите функцию, которая позволит Ване проверять себя. Реализуйте функцию unsigned int MaxNumberOfShifts(unsigned int);, которая вернет максимальное из этих чисел. Например, для числа 19 (10011) это будет 28 (11100). 
*/
double pow(double number,double degree)
{
  double res=1.0;
  if (degree>0)
  {
    for(int i=degree;i>0;i--)
    {
      res *= number;
    }
    return res;
  }
  if (degree<0)
  {
    for(int i=degree;i<0;i++)
    {
      res/=number;
    }
    return res;
  }
  return 1;
}


int Bin(int N,int* arr)
{
  int i = 0;
  while(N)
  {
  arr[i]+=N%2;
  N/=2;
  i++;
  }
  return i;
}

void Shift(int* arr,int Pow)
{
  int tmp = arr[Pow-1];
  for (int i = Pow - 1; i >= 0; i--)
  {
      arr[i] = arr[i-1];
  }
  arr[0] = tmp;
}


int Dec(int* arr,int Pow)
{
int otvet =0;
for(int i=0;i<Pow;i++)
{
otvet+=arr[i]*pow(2,i);
}
return otvet;
}


int main()
{
  int N,arr[1000]={};
  scanf("%i",&N);
  int k = Bin(N,arr);
  int max=0;
  for(int i=0;i<k;i++)
  {
     Shift(arr,k);
     if(Dec(arr,k)> max) 
     max = Dec(arr,k);

  }
  printf("%i\n",max ); 
 
  return 0;
}