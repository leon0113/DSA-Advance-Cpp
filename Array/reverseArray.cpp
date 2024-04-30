#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {4, 5, 6, 42, 53, 54, 94};
    int i = 0, j = 6;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
}