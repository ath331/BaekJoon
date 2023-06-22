#include <stdio.h>
 
 
 
int main() {
 
    int x, y, z, prize[1000], max = 0, n, i, sum = 0, big = 0;
    // max는 입력받은 수중에 가장 큰 값을 구하는 변수
    //  big는 3명의 상금 중에 가장 큰 값을 구하는 변수
    scanf("%d", &n);
 
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        if (x == y && x == z && y == z)    //x==y==z랑은 다른 뜻이다.
            prize[i] = 10000 + x * 1000;
        else if (x == y || x == z)
            prize[i] = 1000 + x * 100;
        else if (y == z)
            prize[i] = 1000 + z * 100;     //z값에 y를 넣어도 된다.
        else {
            if (x > y && x > z)
                max = x;
            else if (y > x && y > z)
                max = y;
            else if (z > x && z > y)
                max = z;                             //3개의 수에서 최댓값을 구하는 코드
            prize[i] = max * 100;
        }
        if (prize[i] > big)
            big = prize[i];
    }
    printf("%d", big);
}
 