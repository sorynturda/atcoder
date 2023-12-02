//https://atcoder.jp/contests/abc263/tasks/abc263_c
#include <bits/stdc++.h>

using namespace std;

void process_solution(int a[], int k) {
    for (int i = 0; i < k; i++)
        printf("%d ", a[i]);
    puts("");
}

void construct_candidates(int a[], int k, int n, int c[], int *nc, int m) {
    int i;
    bool in_perm[m];
    for (i = 1; i <= m; i++) {
        in_perm[i] = false;
    }
    int mx = 0;
    for (i = 0; i < k; i++) {
        in_perm[a[i]] = true;
        mx = max(a[i], mx);
    }
    *nc = 0;
    for (i = mx + 1; i <= m; i++) {
        if (!in_perm[i]) {
            c[*nc] = i;
            *nc = *nc + 1;
        }
    }
}
int cnt=0;
void backtrack(int a[], int k, int n, int m) {
    int c[m];
    int nc;
    int i;
    if (n == k) {
        process_solution(a, k);
    } else {
        construct_candidates(a, k, n, c, &nc, m);
        for (i = 0; i < nc; i++) {
            a[k] = c[i];
            backtrack(a, k + 1, n, m);
        }
    }
}

int main() {
    int a[10];
    int n, m;
    cin >> n >> m;
    backtrack(a, 0, n, m);
    cout<<cnt<<'\n';
    return 0;
}