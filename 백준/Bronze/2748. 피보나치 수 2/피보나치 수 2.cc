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
#include <deque>
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


long long fibo_memo[ 100 ];
long long fibo_DP( int n )
{
	fibo_memo[ 0 ] = 0;
	fibo_memo[ 1 ] = 1;

	if ( fibo_memo[ n ] > 0 ) return fibo_memo[ n ];
	if ( ( n == 0 ) || ( n == 1 ) ) return fibo_memo[ n ];
	return fibo_memo[ n ] = fibo_DP( n - 1 ) + fibo_DP( n - 2 );
}

MAIN_BEGIN
{
	int n = 0;
	cin >> n;

	cout << fibo_DP( n );
}
MAIN_END
