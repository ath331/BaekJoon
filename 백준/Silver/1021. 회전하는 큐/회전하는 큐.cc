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


void MoveLeft( deque< int >&d, int size )
{
	if ( d.empty() )
		return;

	FOR_INDEX( size )
	{
		int front = d.front();
		d.pop_front();

		d.push_back( front );
	}
}

void MoveRight( deque< int >& d, int size )
{
	if ( d.empty() )
		return;

	FOR_INDEX( size )
	{
		int back = d.back();
		d.pop_back();

		d.push_front( back );
	}
}

MAIN_BEGIN
{
	int N, M;
	cin >> N >> M;

	deque< int > q;

	FOR_INDEX( N )
		q.push_back( i + 1 );

	int count = 0;

	FOR_INDEX( M )
	{
		int m = 0;
		cin >> m;

		auto iter = find( q.begin(), q.end(), m );
		int index = distance( q.begin(), iter );

		if ( !index )
		{
			q.pop_front();
			continue;
		}

		if ( index <= q.size() / 2 )
		{
			MoveLeft( q, index );
			count += index;
		}
		else
		{
			MoveRight( q, q.size() - index );
			count += q.size() - index;
		}

		q.pop_front();
	}

	cout << count;
}
MAIN_END
