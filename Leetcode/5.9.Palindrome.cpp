#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number";
    cin >> x;
    if (x < 0)
        cout << "Enter positive number";
    int ans = 0, num = x, rem;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans = ans * 10 + rem;
    }
    if (ans == x)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}