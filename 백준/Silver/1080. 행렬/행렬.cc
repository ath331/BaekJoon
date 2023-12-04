#include <iostream>
using namespace std;

#define MAX 50

char arry1[MAX][MAX];
char arry2[MAX][MAX];

void Insert(int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char num;
            cin >> num;
            arry1[i][j] = num;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char num;
            cin >> num;
            arry2[i][j] = num;
        }
    }
}

void change(char arry1[][MAX], int y, int x)
{
    for (int i = y; i < y + 3; i++)
    {
        for (int j = x; j < x + 3; j++)
        {
            if (arry1[i][j] == '1')
                arry1[i][j] = '0';
            else if (arry1[i][j] == '0')
                arry1[i][j] = '1';
        }
    }
}

int Solution(int N, int M)
{
    int answer = 0;

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 0; j < M - 2; j++)
        {
            if (arry1[i][j] != arry2[i][j])
            {
                change(arry1, i, j);
                answer++;
            }
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(arry1[i][j] != arry2[i][j])
                return -1;
        }
    }

    
    return answer;
}

int main()
{
    int N, M;
    cin >> N >> M;
    Insert(N, M);
    cout << Solution(N, M) << '\n';

    return 0;
}