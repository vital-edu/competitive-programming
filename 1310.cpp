#include <bits/stdc++.h>

using namespace  std;

int A[55];

int printA(int *a, int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void precomp(int *a, int n, int custo) {
  for (int i = 0; i < n; i++) {
    if (i == 0) A[0] = a[0] - custo;
    else A[i] = a[i] + A[i-1] - custo;
  }
}

int melhor(int n) {
  int maxV = -0xffffff;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sum = A[j];
      if (i > 0) sum -= A[i-1];
      maxV = max(sum, maxV);
    }
  }

  return maxV;
}

int main() {
  int n;

  int a[55];

  while (cin >> n) {
    int custo;

    cin >> custo;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    precomp(a, n, custo);

    int res = melhor(n);

    if (res > 0) cout << res;
    else cout << 0;
    cout << endl;
  }
  return 0;
}
