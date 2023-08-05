#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    int P[100];
    int i;
    int x;

    bool check = false;
    x = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &P[i]);
        if (x - P[i] < 0) {
            x = P[i];
        } else if (x == P[i]) {
            check = true;
        }
    }
    
    if (x == P[0]) {
        printf("%d\n", check);
    } else {
        printf("%d\n", x - P[0] + 1);
    }
}
