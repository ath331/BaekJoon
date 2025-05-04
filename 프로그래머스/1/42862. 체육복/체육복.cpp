#include <string>
#include <vector>
#include <algorithm>

	using namespace std;

	int solution( int n, vector<int> lost, vector<int> reserve )
	{
		sort( lost.begin(), lost.end() );

		int answer = 0;

		vector< int > v( n + 1, 1 );

		for ( int l : lost )
			v[ l ] -= 1;

		for ( int r : reserve )
			v[ r ] += 1;

		for ( int l : lost )
		{
			if ( 1 <= v[ l ] )
				continue;

			int preIndex = l - 1;
			int nextIndex = l + 1;

			if ( 0 < preIndex )
			{
				if ( 1 < v[ preIndex ] )
				{
					v[ preIndex ]--;
					v[ l ]++;

					continue;
				}
			}

			if ( nextIndex <= n )
			{
				if ( 1 < v[ nextIndex ] )
				{
					v[ nextIndex ]--;
					v[ l ]++;

					continue;
				}
			}
		}

		for ( int i = 1; i <= n; i++ )
		{
			if ( 1 <= v[ i ] )
				answer++;
		}

		return answer;
	}