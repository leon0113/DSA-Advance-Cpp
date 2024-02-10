#include <iostream>
using namespace std;

int main()
{
    int num = 25, ans;
    for (int i = 1; i <= INT16_MAX; i++)
    {
        int y = i * i;

        if (y > num)
        {
            ans = i - 1;
            break;
        }
    }
    cout << ans;
}