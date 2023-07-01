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
#define INT_N int intN = 0; cin >> intN;
#define INT_M int intM = 0; cin >> intM;
#define STR_N string strN; cin >> strN;
#define STR_M string strM; cin >> strM;
#define MAIN_BEGIN int main() { IO_SPEED_UPGRADE;
#define MAIN_END return 0; }


using namespace std;


MAIN_BEGIN
{
	INT_N;
	INT_M;

	int six = intN * intM;

	int five = intN * ( intM / 100 );
	intM -= ( intM / 100 ) * 100;

	int four = intN * ( intM / 10 );
	intM -= ( intM / 10 ) * 10;

	int three = intN * ( intM );

	cout << three << "\n";
	cout << four  << "\n";
	cout << five  << "\n";
	cout << six   << "\n";
}
MAIN_END
