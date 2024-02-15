#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= 1000; i++)
    {
        if (i / 5 == n)
        {
            count++;
        }
    }
    cout << count;
}