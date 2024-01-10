#include <iostream>
using namespace std;
int main()
{
    int N;
    int minx = 100000; int maxx = -100000;
    int miny = 100000; int maxy = -100000;
    cin >> N;
    int* x = new int[N]; //N만큼 동적할당
    int* y = new int[N]; //N만큼 동적할당
    for (int i = 0; i < N; ++i)
    {
        cin >> x[i] >> y[i];
        if (minx > x[i]) minx = x[i];
        if (maxx < x[i]) maxx = x[i];
        if (miny > y[i]) miny = y[i];
        if (maxy < y[i]) maxy = y[i];
    }
    cout << (maxx - minx) * (maxy - miny);
    //(가장 큰 x좌표 - 가장 작은 x좌표) * (가장 큰 y좌표 - 가장 작은 y좌표)
}