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
#define CIN_TIE_NULLPTR cin.tie( NULL )
#define IO_SPEED_UPGRADE SYNC_WITH_STDIO_FALSE; CIN_TIE_NULLPTR;

// Loop
#define FOR_INDEX( size ) for( int forI = 0 ; forI < size ; forI++ )
#define FOR_INDEX_SECOND( size ) for( int forJ = 0 ; forJ < size ; forJ++ )
#define FOR_RANGE( container ) for( auto item : container )
#define FOR_RANGE_SECOND( container ) for( auto item2 : container )
#define FOR_RANGE_REF( container ) for( auto& itemRef : container )
#define FOR_RANGE_SECOND_REF( container ) for( auto& itemRef2 : container )
#define FOR_ITER( container ) for( auto& iter :  container)
#define FOR_ITER_SECOND( container ) for( auto& iter2 :  container)

// Code
#define INT_( x ) int x = 0; cin >> x;
#define STR_( str ) string str; cin >> str;
#define MAIN_BEGIN int main() { IO_SPEED_UPGRADE;
#define MAIN_END return 0; }


using namespace std;


MAIN_BEGIN
{
	vector< int > v;
	
	FOR_INDEX( 10 )
	{
		INT_( num );
		v.push_back( num );
	}

	set< int > s;

	FOR_RANGE( v )
	{
		s.insert( item % 42 );
	}

	cout << s.size();
}
MAIN_END
