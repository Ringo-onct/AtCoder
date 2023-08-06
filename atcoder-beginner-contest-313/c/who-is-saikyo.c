#include <stdio.h>

int main() {
    int A[1225];
    int B[1225];
    int N;
    int M;
    int i;
    int X[50];
    int check = 0;
    int saikyo;

    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++) {
        X[i] = i + 1;
    }

    for(i = 0; i < M; i++) {
        scanf("%d %d", &A[i], &B[i]);
        X[B[i] - 1] = 0;
    }

    for (i = 0; i < N; i++) {
        if (X[i] != 0) {
            check++;
            saikyo = X[i];
        }
        if(check > 1) {
            break;
        }
    }

    if (check > 1) {
        printf("-1\n");
    } else {
        printf("%d\n", saikyo);
    }

}
