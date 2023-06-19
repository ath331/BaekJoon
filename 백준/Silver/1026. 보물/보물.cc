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


MAIN_BEGIN
{
	vector< int > a;
	vector< int > a1;
	vector< int > b;
	map< int, queue< int > > m;

	int N = 0;
	cin >> N;
	
	FOR_INDEX( N )
	{
		int temp = 0;
		cin >> temp;

		a.push_back( temp );
	}

	FOR_INDEX( N )
	{
		int temp = 0;
		cin >> temp;

		m[ temp ].push( i );
		b.push_back( temp );
	}

	a1.resize( a.size() );
	sort( a.begin(), a.end(), greater< int >() );

	FOR_RANGE( a )
	{
		FOR_RANGE_SECOND_REF( m )
		{
			queue< int >& q = itemRef2.second;
			if ( q.empty() )
				continue;

			int index = q.front();
			q.pop();

			a1[ index ] = item;
			break;
		}
	}

	int answer = 0;

	FOR_INDEX( N )
	{
		int temp = 0;
		temp = a1[ i ] * b[ i ];
		answer += temp;
	}

	cout << answer;
}
MAIN_END