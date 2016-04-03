#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define MAX 50010
#define UNVISITED 0
#define VISITED 1

int adj[MAX];

int states[MAX], dist[MAX];

void dfs(int u, int size) {
  if(dist[u]) return;

  states[u] = VISITED;
  int v = adj[u];

  if (dist[v]) {
    dist[u] = dist[v] + 1;
    return;
  }

  if(states[v] == UNVISITED) {
    dfs(v, size + 1);
    if (not dist[u])
      dist[u] = dist[v] + 1;
  }
  else { 
    while (dist[u] == 0) {
      dist[u] = size;
      u = adj[u];
    }
  }
}

int main() {
  int t;
  scanf("%d", &t);

  for (int test = 1; test <= t; ++test) {
    int v;
    scanf("%d  ", &v);
    for (int i = 0; i < v; i++) {
      int u, v;
      scanf("%d %d", &u, &v);
      adj[u] = v;
    }

    memset(states, UNVISITED, sizeof states);
    memset(dist, 0, sizeof dist);

    for (int i = 1; i <= v; ++i)
      if (states[i] == UNVISITED)
        dfs(i, 1);

    int maxD = -1;
    int maxU = -1;
    for (int i = 1; i <= v; ++i) {
      if (dist[i] > maxD) {
        maxD = dist[i];
        maxU = i;
      }
    }

    printf("Case %d: %d\n", test, maxU);
  }

  return 0;
}
