#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    
    cin >>A>>B>>C;
    
    if((A+B+C)!=180)
        cout <<"Error\n";
    else if(A==B && B==C)
        cout <<"Equilateral\n";
    else if(A==B || A==C || B==C)
        cout  <<"Isosceles\n";
    else
        cout <<"Scalene\n";
    
    return 0;
    
}