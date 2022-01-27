#include <stdio.h>
/*
4. В институте планируется пересдача по языкам программирования. Для пересдачи нужно рассадить слушателей по аудиториям. Каждая аудитория вмещает classroomCapacity человек. Всего в день пересдачи придет studentsCount слушателей и teachersCount преподавателей. В каждой аудитории, где есть слушатели, должно быть не менее двух преподавателей. Необходимо  рассчитать минимальное количество аудиторий, чтобы уместились все слушатели и преподаватели. Реализуйте функцию int Exam(int, int, int), которая вернет минимальное число аудиторий. Если осуществить рассадку невозможно, вернуть 0. Например, если есть 10 слушателей, 4 преподавателя, а аудитория вмещает 7 человек, то потребуется 2 аудитории. 
*/
int Exam(int studentsCount, int teachersCount, int classroomCapacity)
{
  int roomCounter =  
  (studentsCount+teachersCount) % classroomCapacity == 0 ?
    (studentsCount+teachersCount) / classroomCapacity :
    (studentsCount+teachersCount) / classroomCapacity + 1 ;
  return 
    roomCounter * 2 > teachersCount ?
      0 :
      roomCounter;
}

int main()
{
  printf("Введите кол-во учеников, экзаменаторов и вместимость аудитории:");
  int classroomCapacity, studentsCount,teachersCount;
  scanf("%i %i %i", &studentsCount, &teachersCount, &classroomCapacity);
  printf("%i", Exam(studentsCount ,teachersCount, classroomCapacity) );
  return 0;
}