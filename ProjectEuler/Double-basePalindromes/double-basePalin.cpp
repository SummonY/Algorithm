#include <iostream>

using namespace std;

bool isDoubleBasePalindromes(int n);

int main(int argc, const char *argv[])
{
    int sum = 0;

    for (int i = 1; i <= 1000000; ++i) {
        if (isDoubleBasePalindromes(i)) {
            sum += i;
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}

bool isDoubleBasePalindromes(int n)
{
    if (n % 2 == 0)
        return false;
    int num = n, size, plind = 0;
    string str;
    
    while (num) {
        plind = plind * 10 + num % 10;
        num /= 10;
    }

    if (plind == n) {
        while (plind) {
            if (plind % 2 == 0)
                str += "0";
            else
                str += "1";
            plind /= 2;
        }
        size = str.size();
        for (auto i = 0; i < size / 2; ++i) {
            if (str[i] != str[size - i - 1])
                return false;
        }
    } else
        return false;
    return true;
}
