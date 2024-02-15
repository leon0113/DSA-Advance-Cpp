#include <iostream>

int count_trailing_zeros(int n)
{
    int count = 0;
    while (n % 10 == 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int find_integers_with_n_zeros(int N)
{
    if (N % 2 != 0 && N % 5 != 0)
    {
        return 0;
    }

    int count = 0;
    int i = 5;
    while (N <= count_trailing_zeros(i))
    {
        count++;
        i += 5;
    }

    return count;
}

int main()
{
    std::cout << find_integers_with_n_zeros(1) << std::endl; // Output: 5
    std::cout << find_integers_with_n_zeros(5) << std::endl; // Output: 0
    return 0;
}