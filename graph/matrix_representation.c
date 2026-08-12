#include <stdio.h>
#define v 4

void printAdjMatrix(int graph[v][v])
{
  printf("Adjacency matrix:\n");
  for (int i = 0; i < v; i++)
  {
    for (int j = 0; j < v; j++)
    {
      printf("%d ", graph[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int graph[v][v] = {
      {0, 1, 0, 1},
      {1, 0, 1, 0},
      {0, 1, 0, 1},
      {1, 0, 1, 0}};

  printAdjMatrix(graph);
  return 0;
}