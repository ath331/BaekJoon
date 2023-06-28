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


MAIN_BEGIN
{
	string str;
	cin >> str;

	str = regex_replace( str, regex( "c="  ), "A" );
	str = regex_replace( str, regex( "c-"  ), "B" );
	str = regex_replace( str, regex( "dz=" ), "C" );
	str = regex_replace( str, regex( "d-"  ), "D" );
	str = regex_replace( str, regex( "lj"  ), "E" );
	str = regex_replace( str, regex( "nj"  ), "F" );
	str = regex_replace( str, regex( "s="  ), "G" );
	str = regex_replace( str, regex( "z="  ), "H" );

	cout << str.size();
}
MAIN_END
