#include <stdio.h>

int stack[1001];
int top = -1;

void push(int data)
{
    stack[++top] = data;
}

int pop()
{
    return stack[top--];
}

int main()
{
    int N;
    int possible = 1;
    int num;

    scanf("%d", &N);    

    while (N--) {
        scanf("%d", &num);
        if (num == possible) {
            possible++;
            while (top >= 0 && stack[top] == possible) {
                pop();
                possible++;
            }
        }
        else {
            push(num);
        }
    }

    if (top == -1)
        printf("Nice");
    else
        printf("Sad");

    return 0;
}