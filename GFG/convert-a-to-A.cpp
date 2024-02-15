#include <iostream>
using namespace std;

char convert(char x)
{
    char ans = x - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cin >> name;
    cout << convert(name);
}