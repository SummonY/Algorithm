#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int i, j, k, l, m, n, o;
    int ji, ki, li, mi, ni, oi, sum, p;

    sum = 1;
    for (i = 2; i >= 0; --i)
    {
        p = 200 - i * 100;
        ji = p;
        if (p == 0)
        {
            ++sum;
            continue;
        }
        for (j = ji / 50; j >= 0; --j)
        {
            p = ji - 50 * j;
            ki = p;
            if (p == 0)
            {
                ++sum;
                continue;
            }
            for (k = ki / 20; k >= 0; --k)
            {
                p = ki - 20 * k;
                li = p;
                if (p == 0)
                {
                    ++sum;
                    continue;
                }
                for (l = li / 10; l >= 0; --l)
                {
                    p = li - 10 * l;
                    mi = p;
                    if (p == 0)
                    {
                        ++sum;
                        continue;
                    }
                    for (m = mi / 5; m >= 0; --m)
                    {
                        p = mi - 5 * m;
                        ni = p;
                        if (p == 0)
                        {
                            ++sum;
                            continue;
                        }
                        for (n = ni / 2; n >= 0; --n)
                        {
                            p = ni - 2 * n;
                            oi = p;
                            if (p == 0)
                            {
                                ++sum;
                                continue;
                            }
                            o = oi;
                            p = oi - 1 * o;
                            if (p == 0)
                            {
                                ++sum;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
