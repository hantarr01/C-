#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main()
{
  int a[SIZE][SIZE]; // матрица св€зей
  int d[SIZE]; // минимальное рассто€ние
  int v[SIZE]; // посещенные вершины
  int temp, minindex, min;
  int begin_index = 0;
  system("chcp 1251");
  system("cls");
  // »нициализаци€ матрицы св€зей
  for (int i = 0; i<SIZE; i++)
  {
    a[i][i] = 0;
    for (int j = i + 1; j<SIZE; j++) {
      printf("¬ведите рассто€ние %d - %d: ", i + 1, j + 1);
      scanf("%d", &temp);
      a[i][j] = temp;
      a[j][i] = temp;
    }
  }
  // ¬ывод матрицы св€зей
  for (int i = 0; i<SIZE; i++)
  {
    for (int j = 0; j<SIZE; j++)
      printf("%5d ", a[i][j]);
    printf("\n");
  }
  //»нициализаци€ вершин и рассто€ний
  for (int i = 0; i<SIZE; i++)
  {
    d[i] = 10000;
    v[i] = 1;
  }
  d[begin_index] = 0;
  // Ўаг алгоритма
  do {
    minindex = 10000;
    min = 10000;
    for (int i = 0; i<SIZE; i++)
    { // ≈сли вершину ещЄ не обошли и вес меньше min
      if ((v[i] == 1) && (d[i]>=min))
      { // ѕереприсваиваем значени€
        min = d[i];
        minindex = i;
      }
    }
    // ƒобавл€ем найденный минимальный вес
    // к текущему весу вершины
    // и сравниваем с текущим минимальным весом вершины
    if (minindex != 10000)
    {
      for (int i = 0; i<SIZE; i++)
      {
        if (a[minindex][i] > 0)
        {
          temp = min + a[minindex][i];
          if (temp < d[i])
          {
            d[i] = temp;
          }
        }
      }
      v[minindex] = 0;
    }
  } while (minindex < 10000);
  // ¬ывод кратчайших рассто€ний до вершин
  printf("\n —амые большие рассто€ни€ до вершин: \n");
  for (int i = 0; i<SIZE; i++)
    printf("%5d ", d[i]);

  // ¬осстановление пути
  int ver[SIZE]; // массив посещенных вершин
  int end = 5; // индекс конечной вершины = 5 - 1
  ver[0] = end + 1; // начальный элемент - конечна€ вершина
  int k = 1; // индекс предыдущей вершины
  int weight = d[end]; // вес конечной вершины

  while (end != begin_index) // пока не дошли до начальной вершины
  {
    for (int i = 0; i<SIZE; i++) // просматриваем все вершины
      if (a[end][i] != 0)   // если св€зь есть
      {
        int temp = weight - a[end][i]; // определ€ем вес пути из предыдущей вершины
        if (temp == d[i]) // если вес совпал с рассчитанным
        {                 // значит из этой вершины и был переход
          weight = temp; // сохран€ем новый вес
          end = i;       // сохран€ем предыдущую вершину
          ver[k] = i + 1; // и записываем ее в массив
          k++;
        }
      }
  }
  // ¬ывод пути (начальна€ вершина оказалась в конце массива из k элементов)
  printf("\n¬ывод длиннейшего пути\n");
  for (int i = k - 1; i >= 0; i--)
    printf("%3d ", ver[i]);
  getchar(); getchar();
  return 0;
}
