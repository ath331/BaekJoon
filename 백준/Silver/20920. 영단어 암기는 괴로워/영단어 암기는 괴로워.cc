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


// IO
#define SYNC_WITH_STDIO_FALSE ios_base::sync_with_stdio( false )
#define CIN_TIE_NULLPTR cin.tie( nullptr )
#define IO_SPEED_UPGRADE SYNC_WITH_STDIO_FALSE; CIN_TIE_NULLPTR;

// Loop
#define FOR_INDEX( size ) for( int i = 0 ; i < size ; i++ )
#define FOR_INDEX_SECOND( size ) for( int j = 0 ; j < size ; j++ )
#define FOR_RANGE( container ) for( auto item : container )
#define FOR_RANGE_SECOND( container ) for( auto item2 : container )
#define FOR_RANGE_REF( container ) for( auto& item : container )
#define FOR_RANGE_SECOND_REF( container ) for( auto& item2 : container )

// Code
#define MAIN_BEGIN int main() { IO_SPEED_UPGRADE; 
#define MAIN_END return 0; }


using namespace std;


struct myOrder
{
	bool operator() ( const string& left, const string& right ) const
	{
		if ( left.size() < right.size() )
			return left < right;
		else 
			return left < right;
	}
};


MAIN_BEGIN
{
	map< string, int > wordBook;

	int wordCount = 0, strLeng = 0;
	cin >> wordCount >> strLeng;

	FOR_INDEX( wordCount )
	{
		string word;
		cin >> word;

		if ( word.size() < strLeng )
			continue;

		wordBook[ word ] += 1;
	}

	// count, length, abc
	using ABCSet       = set< string, myOrder >;
	using LengthSetMap = map< int, ABCSet, greater< int > >;
	using Countmap     = map< int, LengthSetMap, greater< int > >;

	Countmap sortWordBook;

	FOR_RANGE_REF( wordBook )
	{
		int count = item.second;
		string word = item.first;

		LengthSetMap& lenghtMap = sortWordBook[ count ];
		lenghtMap[ word.length() ].insert( word );
	}

	FOR_RANGE_REF( sortWordBook )
	{
		LengthSetMap& lengthSetMap = item.second;

		FOR_RANGE_SECOND_REF( lengthSetMap )
		{
			for ( string str : item2.second )
			{
				cout << str << "\n";
			}
		}
	}
}
MAIN_END