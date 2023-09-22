// Example program
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string n;
int tnumber;
string name;
vector <string> tname(51);

int cal(string s,string name){
    int L=0,O=0,V=0,E=0;
    int res=0;
    for(auto c:s){
        switch(c){
           case 'L': L++;break;
           case 'O': O++;break;
           case 'V': V++;break;
           case 'E': E++;break;
        }
    }
    for(auto c:name){
        switch(c){
           case 'L': L++;break;
           case 'O': O++;break;
           case 'V': V++;break;
           case 'E': E++;break;
        }
    }
    
    res = ((L+O) * (L+V) * (L+E) * (O+V) * (O+E) * (V+E)) % 100;
    return res;
}

int main()
{
  cin>>name;
  cin>>tnumber;
    
  int tmp =-1;
  string answ="";
  for(int i=0;i<tnumber;i++){
      cin>>tname[i];
  }
  sort(tname.begin(),tname.begin()+tnumber);
  
  for(int i=0;i<tnumber;i++){
      int winner = cal(tname[i],name);
      //cout<<winner<<tname[i]<<'b'<<'\n';
      if(winner>tmp){tmp=winner; answ=tname[i];}
  }
  
  cout<<answ;
}