#include <iostream>
using namespace std;
int n, sum, arr[200000], p;
int main() {
    
    while(1)
    {
        cin >> n;
        if (n == -1)
            break;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                arr[p++] = i;//약수 저장
                sum += i;
            }
        }
        if (sum != n)
        {
            cout << n << " is NOT perfect." << '\n';
        }
        else if (sum == n)
        {                
            cout << n << " = ";
                for (int i = 0; i < p - 1; i++)
                {

                    cout << arr[i] << " + ";
                    arr[i] = 0;
                }
            cout << arr[p - 1] << '\n';
            arr[p-1] = 0;            
        }    
        p = 0;
        sum = 0;
    }
}