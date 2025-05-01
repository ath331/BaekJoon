#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <functional>


using namespace std;


int solution( vector< int > numbers, int target )
{
	int answer = 0;

	function< void( int, int ) > DFS;

	DFS = [ & ]( int index, int sum )
	{
		if ( numbers.size() == index )
		{
			if ( target == sum )
				answer++;

			return;
		}

		DFS( index + 1, sum + numbers[ index ] );
		DFS( index + 1, sum - numbers[ index ] );
	};

	DFS( 1, numbers[ 0 ] );
	DFS( 1, numbers[ 0 ] * -1 );

	return answer;
}