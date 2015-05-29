#include <stdio.h>
#include <math.h>

void initDiagonals(int n);

int main(int argc, char *argv[])
{
    int i, n; 
    long long sum = 1;
    n = 1001;
    initDiagonals(n);
   
    // method 2 
    for (i = 3; i <= 1001; i += 2) {
        sum += 4 * pow(i, 2) - 6 * i + 6;
    }
    printf("sum = %lld\n", sum);
    return 0;
}

void initDiagonals(int n)
{
    int i, j, p, q;
    int num = 1, l = 1, loc = n / 2, sum = 0;
    int A[n][n];
    
    p = q = loc;
    A[p][q] = num;

    while (l < n) {
        if (l % 2 != 0) {
            A[p][++q] = ++num;
            for (i = 0; i < l; ++i) {
                A[++p][q] = ++num;
            }
            for (i = 0; i < l; ++i) {
                A[p][--q] = ++num;
            }
        }
        if (l % 2 == 0) {
            A[p][--q] = ++num;
            for (i = 0; i < l; ++i) {
                A[--p][q] = ++num;
            }
            for (i = 0; i < l; ++i) {
                A[p][++q] = ++num;
            }
        }
        ++l;
    }
   /* 
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
*/
    for (i = 0; i < n; ++i) {
        sum += A[i][i];
        sum += A[i][n - i - 1];
    }
    sum -= 1;
    printf("sum = %d\n", sum);
}
