//https://atcoder.jp/contests/abc263/tasks/abc263_c
#include <bits/stdc++.h>

using namespace std;

void process_solution(int a[], int k, int m) {
    for (int i = 1; i <= m; i++)
        if (a[i])
            printf("%d ", i);
    puts("");
}

void construct_candidates(int a[], int k, int c[], int *nc) {
    c[0] = true;
    c[1] = false;
    *nc = 2;
}

void backtrack(int a[], int k, int n, int m) {
    int c[1];
    int nc;
    int i;
    if (n == k - 1) {
        process_solution(a, k, m);
    } else {
        k = k + 1;
        construct_candidates(a, k, c, &nc);
        for (i = 0; i < nc; i++) {
            a[k] = c[i];
            backtrack(a, k, n, m);
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    int v[a];
    backtrack(v, 0, a, b);
    return 0;
}