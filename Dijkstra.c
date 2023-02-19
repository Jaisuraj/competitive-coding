#include <limits.h>
#include <stdio.h>
#include <stdbool.h>
int N;
int minDistance(int dist[], bool sptSet[], int n)
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}
int printSolution(int dist[], int n) {
   printf("Output: \n");
   for (int i = 0; i < n; i++)
   {
       printf("D[%d]=%d;\t", i, dist[i]);
   }
   printf("\n");
}
void dijkstra(int graph[N][N], int src,int n) {
   int dist[n];
   bool sptSet[n];
   for (int i = 0; i < n; i++)
      dist[i] = INT_MAX, sptSet[i] = false;
      dist[src] = 0;
   for (int count = 0; count < n - 1; count++) {
      int u = minDistance(dist, sptSet,n);
      sptSet[u] = true;
      for (int v = 0; v < n; v++)
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) dist[v] = dist[u] + graph[u][v];
   }
   printSolution(dist, n);
}
int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    int D[n][n];
    N = n;
    printf("\nEnter the Weight of the edges respectively:\n");
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            scanf("%d", &D[i][j]);
        }
    }
        dijkstra(D, 0,n);
    return 0;
}