// https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n >= 5)
    {
        int x = n / 5;
        count += x;
        n /= 5;
    }
    cout << count;
}