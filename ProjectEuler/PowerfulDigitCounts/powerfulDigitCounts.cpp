#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    int i, j, counts = 0;

    for (i = 1; i < 10; ++i)
    {
         counts += floor(log10(10) / (log10(10) - log10(i)));
    }
    cout << "counts = " << counts << endl;
    return 0;
}
