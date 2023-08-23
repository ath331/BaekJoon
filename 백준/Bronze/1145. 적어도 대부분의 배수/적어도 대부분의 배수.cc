#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
 
    for (int i = 1;; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 5; j++)
            if (i % arr[j] == 0)
            {
                cnt++;
                if (cnt >= 3)
                {
                    cout << i;
                    return 0;
                }
            }
    }
    return 0;
 
}