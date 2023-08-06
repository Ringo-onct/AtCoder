#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    qsort(a, n, sizeof(int), cmpfunc);
    int *b = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        b[i] = sum / n;
    }
    for (int i = 0; i < sum % n; i++) {
        b[n - 1 - i]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(a[i] - b[i]);
    }
    printf("%lld\n", ans / 2);
    free(a);
    free(b);
    return 0;
}
