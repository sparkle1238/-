#include <stdio.h>
/*
5. Вам дано задание разработать модуль проверки серийного ключа программы. Для повышения защищенности от взлома принято решение отказаться от статического ключа, а изменять его со временем. Если в данный момент ключ равен N, то через минуту он будет равен N + S(N), где S(N) – это число, называемое контрольной суммой числа N и равняется количеству единиц в двоичной записи числа N.  Например, если N = 6, то в следующую минуту значение ключа будет равно 8, если быть точнее, то N’ = N + S(N) = 6 + S(6) = 610 + S(1102) = 6 + 2 = 8. Напишите функцию unsigned GetSerial(unsigned key, unsigned minutes);, которая вычислит серийный ключ, полученный из key через minutes минут. 
*/
int unitCounter(int key)
{
  int numCounter = 0;
  while (key)
  {
    numCounter += key%2;
    key/=2; 
  }
  return numCounter;
}


unsigned GetSerial(unsigned key, unsigned minutes)
{
  while (minutes)
  {
    key+=unitCounter(key);
    minutes--;
  }
  return key;
}


int main()
{
  int key, minutes;
  scanf("%i %i",&key,&minutes);
  printf("%i",GetSerial(key, minutes));
  return 0;
}