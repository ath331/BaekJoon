#include <iostream>

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	
	while(true){
		cin >> N;
		int sum=0;
		
		if(N==0)
			return 0;
			
		while(true){
			if(N%10==1) sum+=2;
			else if(N%10==0) sum+=4;
			else sum+=3;	
			
			if(N<10) break;
			
			N/=10;
			sum+=1;	
		}
		
		cout << sum+2 <<"\n";
	}
	return 0; 
}

