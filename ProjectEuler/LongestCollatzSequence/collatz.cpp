#include <iostream>

using namespace std;

int collatz(long long int n);

int main(int argc, const char *argv[])
{
    int i, count, maxi, maxcount = 0;

    for (i = 20000; i < 1000000; ++i)
    {
        count = collatz(i);
        if (count > maxcount)
        {
            maxi = i;
            maxcount = count;
        }
    }
    cout << "maxi = " << maxi << " maxcount = " << maxcount << endl;
    return 0;
}

int collatz(long long int n)
{
    int num = 1;
    if (n == 1)
    {
        return num;
    }
    
    if (n % 2 == 1 && n > 1)
    {
        num += collatz(3 * n + 1);
    }
    else if (n % 2 == 0)
    {
        num += collatz(n / 2);
    }
    return num;
}
