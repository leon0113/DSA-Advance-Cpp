#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 34, 16, 17, 8}; // array declaration and initialization
    int ans = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans;
}