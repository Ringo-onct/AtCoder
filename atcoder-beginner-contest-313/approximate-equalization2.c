#include <stdio.h>

int main() {
    int A[200000];
    int N;
    int i;
    int min = 0;
    int max = 0;
    long int x;
    int d;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[min] >= A[i]) {
            min = i;
        } else if (A[max] <= A[i]) {
            max = i;
        }
    }

    for (x = 0; A[max] - A[min] > 1; x++) {
        A[max]--;
        A[min]++;
        for (i = 0; i < N; i++) {
            if (A[min] >= A[i]) {
                min = i;
            } else if (A[max] <= A[i]) {
                max = i;
            }
        }
    }

    printf("%ld\n", x);
}
