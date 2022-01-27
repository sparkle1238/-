#include <stdio.h>
/*
1. Ваня Штерн очень любит различные последовательности, в частности - числа Фибоначчи и хочет составлять слова из букв алфавита, номера которых предствляют собой цифры из чисел последовательности Фибоначчи. То есть для двузначные (и далее) числа предварительно необходимо разбить на цифры, для каждой из которых взять соответствующую букву. Напишите функцию char* MakeFibonacciWord(unsigned number), где number - количество чисел Фибоначчи (1 <= number <= 48), участвующих в формировании строки. Использовать первые 10 буквы латинского алфавита: «abcdefghij» (считать, что нулевая буква 'a'). Например, если number = 10, то функция должна вернуть “bbcdfibdcbdeff”, так как первые 6 чисел Фибоначчи равны 1, 1, 2, 3, 5, 8, 13, 21, 34, 55. 
*/

void Fibonnachi(int number,int *fibonnachi)
{
  for (int i=2;i<number;i++)
  {
    fibonnachi[i]+=fibonnachi[i-1]+fibonnachi[i-2];
  }
}

int pow(int number, int degree)
{
  if (degree==0) return 1;
  int answer = 1;
  for (int i = 0;i<degree;i++)
  {
    answer*=number;
  }
  return answer;
}

char MakeFibonacciWord(unsigned number,int *fibonnachi/*fibonnachi */,char*  arr1)
{
  for (int i = 0;i<number;i++)
  {
    int counter=0;
    int arr = fibonnachi[i];
    while (arr)
    {
      counter++;
      arr/=10;
    }
  //  printf("%i\n",counter);
    while (counter)
    {
      printf("%c",arr1[(fibonnachi[i]/pow(10,counter-1))%10]);
      counter--;
    }
  
  }
}

int main()
{ 
  int number = 0;
  scanf("%i",&number);
  char arr1[10] = {'a','b','c','d','e','f','g','h','i','j'} ;
  int fibonnachi[48] = {1,1};
  
  Fibonnachi(number,fibonnachi);
  for(int i=0;i<number;i++)printf("%i ",fibonnachi[i]);
   printf("\n");
  MakeFibonacciWord(number,fibonnachi,arr1);
}

