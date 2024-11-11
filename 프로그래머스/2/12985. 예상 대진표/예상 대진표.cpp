#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <stack>
#include <queue>


using namespace std;


int solution( int n, int a, int b )
{
	int answer = 0;

	queue< int > winner;

	for ( int i = 0; i < n; i++ )
		winner.push( i + 1 );

	queue< int > person;

	while ( true )
	{
		answer++;
		person = winner;

		int maxMatchCount = winner.size() / 2;
		winner = queue< int >();

		for ( int i = 0; i < maxMatchCount; i++ )
		{
			int firstPerson = person.front(); person.pop();
			int secondPerson = person.front(); person.pop();

			if ( firstPerson == a && secondPerson == b ) return answer;
			if ( firstPerson == b && secondPerson == a ) return answer;

			if ( firstPerson == a || firstPerson == b )
			{
				winner.push( firstPerson );
				continue;
			}

			if ( secondPerson == a || secondPerson == b )
			{
				winner.push( secondPerson );
				continue;
			}

			// a나 b가 있는 대진이 아니라면 아무나 이겨도 되니 첫번째 사람이 이긴다고 생각한다.
			winner.push( firstPerson );
		}
	}

	return answer;
}