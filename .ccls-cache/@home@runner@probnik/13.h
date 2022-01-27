#include <stdio.h>
/*
13. Ваня Штерн решает следующую задачу: на заданной последовательности чисел расставляет операции сложения и умножения таким образом, чтобы в результате получилось нечетное число. Помогите Ване автоматизировать поиск. Например, из чисел 5,7,2 можно составить выражение 5x7+2=37. Напишите функцию char* GetOddNumber(const int* numbers, unsigned size);, которая вернет строку с символами 'x' (умножение) и '+' (сложение). Гарантируется, что решение существует. 
*/
int main()
{
  int arr[5]={};
  //ввод массива  
  for(int i=0;i<5;i++)
  {
    scanf("%i",&arr[i]);
  }
  
  int mult=1;
  for(int i=1;i<5;i++)
  {
    mult*=arr[i];
  }
  int answer;
  if (mult%2==0 && arr[0]%2==1)
  {
    answer = arr[0]+mult ;
    printf("%i+",arr[0]);
  }
  if (mult%2==1 && arr[0]%2==1)
  {
    answer = arr[0]*mult;
    printf("%iX",arr[0]);
  }
  if (mult%2==1 && arr[0]%2==0)
  {
    answer = arr[0]+mult;
     printf("%i+",arr[0]);
  }
  for(int i=1;i<5;i++)
  {
    printf("%iX",arr[i]);
  }  
  printf("=%i",answer);
  return 0;
}
