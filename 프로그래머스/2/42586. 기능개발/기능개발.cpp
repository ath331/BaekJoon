#include <string>
#include <vector>
#include <queue>

	using namespace std;

	vector<int> solution( vector<int> progresses, vector<int> speeds )
	{
		vector< int > answer;

		queue< int > q;

		for ( int i = 0; i < progresses.size(); i++ )
		{
			int curProgress = progresses[ i ];
			int speed = speeds[ i ];

			int day = 0;
			while ( curProgress < 100 )
			{
				curProgress += speed;
				day++;
			}

			q.push( day );
		}

		while ( !q.empty() )
		{
			int curDay = q.front();
			q.pop();

			int count = 1;
			while ( true )
			{
				if ( q.empty() )
					break;

				if ( q.front() <= curDay )
				{
					q.pop();
					count++;
				}
				else
				{
					break;
				}
			}

			answer.push_back( count );
		}

		return answer;
	}