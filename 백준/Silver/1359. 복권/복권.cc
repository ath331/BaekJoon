#include <iostream>
#include <cstdio>

using namespace std;

long long Combination(int n,int r)
{
    int p =1;
    int c=1;
    while(r>0)
    {
        c*=n--;
        p*=r--;
    }
    return c/p;
}

int main()
{
    int n,m,k;

    cin >> n >> m >> k;

    double res = 0.0;
    double p = Combination(n,m);
    while(m>=k)
    {
        if(n-m < m-k)
        {
            k++;
            continue;
        }

        double c = Combination(m,k) * Combination(n-m,m-k);

        res += c/p;
        k++;

    }
    printf("%.16f",res);
    return 0;
}