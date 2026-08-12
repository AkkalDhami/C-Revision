#include <stdio.h>
#define v 5

void BFS(int graph[v][v], int start)
{
  int visited[v] = {0};
  int queue[v], front = 0, rear = 0;
  visited[start] = 1;
  printf("BFS: ");
  while (front < rear)
  {
    int vv = queue[front++];
    printf("%d ", vv);

    for (int i = 0; i < v; i++)
    {
      if (graph[vv][i] && !visited[i])
      {
        visited[i] = 1;
        queue[rear++] = i;
      }
    }
  }
}
int main()
{
  int graph[v][v] = {
      {0, 1, 1, 0, 0},
      {1, 0, 1, 1, 0},
      {1, 1, 0, 0, 1},
      {0, 1, 0, 0, 1},
      {0, 0, 1, 1, 0}};

  BFS(graph, 0);

  return 0;
}