#include <iostream>
#include <cstdio>

int main (void){
    int n, kim, lim;
    int round = 0;
    
    scanf("%d %d %d", &n, &kim, &lim);
    
    while(kim != lim){
        kim = (kim+1)/2;
        lim = (lim+1)/2;
        round++;
    }
    
    printf("%d\n", round);
}