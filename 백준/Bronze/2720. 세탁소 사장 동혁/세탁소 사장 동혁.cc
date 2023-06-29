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
#include <regex>

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


void GetMoney( int value, int& Q, int& D, int& N, int& P )
{
	if ( value / 25 )
	{
		Q = value / 25;
		value -= Q * 25;
	}

	if ( value / 10 )
	{
		D = value / 10;
		value -= D * 10;
	}

	if ( value / 5 )
	{
		N = value / 5;
		value -= N * 5;
	}

	P += value;
}

MAIN_BEGIN
{
	int T = 0;
	int value = 0;
	cin >> T;

	FOR_INDEX( T )
	{
		cin >> value;

		int Q = 0, D = 0;
		int N = 0, P = 0;

		GetMoney( value, Q, D, N, P );

		cout << Q << " " << D << " " << N << " " << P << "\n";
	}
}
MAIN_END
