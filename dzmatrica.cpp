#include <stdio.h>
#define M 4
int main(void) {
    int i, j, m, v;
    int A[M][M] = {
        {4,9,9,1},
        {5,6,7,2},
        {2,4,4,3},
        {2,4,6,8}
    };
    for (i = 0; i < M; ++i) {
        m = A[M - 1 - i][0];
        for (j = i; j >= 0; --j) {
            v = A[M - 1 - j][i - j];
            if (m > v)
                m = v;
            printf("%d ", v);
        }
        printf(" min: %d\n", m);
    }
    for (j = 1; j < M; ++j) {
        m = A[0][j];
        for (i = j; i < M; ++i) {
            v = A[i - j][i];
            if (m > v)
                m = v;
            printf("%d ", v);
        }
        printf(" min: %d\n", m);
    }
    getchar();
    return 0;
}