/////////////////////////////////////////////////////////////////////
// @brief    main
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <stack>

// IO
#define SYNC_WITH_STDIO_FALSE ios_base::sync_with_stdio( false )
#define CIN_TIE_NULLPTR cin.tie( nullptr )
#define IO_SPEED_UPGRADE SYNC_WITH_STDIO_FALSE; CIN_TIE_NULLPTR;

// Loop
#define FOR_INDEX( size ) for( int i = 0 ; i < size ; i++ )
#define FOR_INDEX_SECOND( size ) for( int j = 0 ; j < size ; j++ )
#define FOR_RANGE( container ) for( auto item : container )
#define FOR_RANGE_SECOND( container ) for( auto item2 : container )
#define FOR_RANGE_REF( container ) for( auto& itemRef : container )
#define FOR_RANGE_SECOND_REF( container ) for( auto& itemRef2 : container )

// Code
#define MAIN_BEGIN int main() { IO_SPEED_UPGRADE; 
#define MAIN_END return 0; }


using namespace std;


using namespace std;
long long fiboarr[ 50 ] = { 0,1, };


long long fibo( int N )
{
    if ( N == 0 || N == 1 )
        return fiboarr[ N ];
    else if ( fiboarr[ N ] == 0 )
        fiboarr[ N ] = fibo( N - 1 ) + fibo( N - 2 );
    return fiboarr[ N ];
}

MAIN_BEGIN
{
    int N = 0;
    cin >> N;

    FOR_INDEX( N )
    {
        int num = 0;
        cin >> num;

        if ( !num )
            cout << "1 0" << '\n';
        else 
            cout << fibo( num -1 ) << " " << fibo( num ) << "\n";
    }
}
MAIN_END