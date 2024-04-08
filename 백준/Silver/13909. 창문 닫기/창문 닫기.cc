#include <iostream>

int main()
{
    int N, count = 0;
    std::cin >> N;
    
    for(int i = 1; i * i <= N; ++i)
        count++;
    std::cout << count;
}