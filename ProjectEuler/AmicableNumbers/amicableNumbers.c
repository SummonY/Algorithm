#include <stdio.h>
#include <math.h>

int amicableNumber(int n);

int main(int argc, const char *argv[])
{
    int i, sum = 0;
    int n, m;

    for (n = 10; n <= 10000; ++n) {
        m = amicableNumber(n);
        if (n == amicableNumber(m) && n != m) {
            printf("n = %d, m = %d\n", n, m);
            sum += n + m;
        }
    }
    printf("sum = %d\n", sum / 2);
    return 0;
}

int amicableNumber(int n)
{
    int sum = 1, s = sqrt(n);
    for (int i = 2; i <= s; ++i) {
        if (n % i == 0) {
            sum += i;
            if (s * s != n)
                sum += n / i;
        }
    }
    return sum;
}
