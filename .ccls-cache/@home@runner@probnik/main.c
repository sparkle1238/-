#include <stdio.h>
/*
2. Ваня Штерн ежедневно ездит на троллейбусе, поэтому у него много билетов. Помогите Ване определять, является ли билет счастливым. Реализуйте функцию bool CheckTicket(unsigned int), которая принимает на вход номер билета (любой разрядности, не обязательно шестизначный) и возвращает true, если билет счастливый и false в противном случае 
*/
int CheckTicket(int number)
{
  int counter = 0;
  int arr[999]={};
  while(number)
  {
    arr[counter]=number%10;
    number/=10;
    counter++;
  }
  int firstHalf = 0;
  for (int i = 0;i<counter/2;i++)//counter =4 0123
  {
    firstHalf +=arr[i];
  }
  int secondHalf = 0;
  for (int j = counter/2;j<counter;j++)
  {
    secondHalf +=arr[j];
  }
  if (firstHalf==secondHalf)
  {
    return 1;
  }
  return 0;
}

int main()
{ 
  int number = 0;
  scanf("%i",&number);
  CheckTicket(number) == 1 ? printf("True") : printf("False");
}

