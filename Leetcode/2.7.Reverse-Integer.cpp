#include <iostream>
using namespace std;

int main()
{
    int num = 231, ans = 0, rem;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;

        if (ans > INT32_MAX / 10 || ans < INT32_MIN)
            return 0;

        ans = rem + ans * 10;
    }
    cout << ans;
}