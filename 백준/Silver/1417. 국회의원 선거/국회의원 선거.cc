#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    priority_queue<int> pq;
    
    int N, answer=0, dasom, in;
    cin>>N;
    cin >>dasom;
    N--;
    while(N--){
        cin>>in;
        if(in>=dasom) pq.push(in);
    }
    
    while(!pq.empty() && pq.top()>=dasom ){// top이 다솜보다 크거나 같다면 
        int t=pq.top(); pq.pop();
        t--; answer++; dasom++;
        pq.push(t);
    }
    
    cout<<answer<<"\n";
    
    return 0;
}