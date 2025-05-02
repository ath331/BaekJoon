#pragma once

// https://school.programmers.co.kr/learn/courses/30/lessons/43162

#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;



	int BFS( const vector< vector< int > >& computers )
	{
		int answer = 0;

		//map< int, vector< int > > m;
		vector< bool > v( computers.size(), false );

		// 그래프 연결성을 확보
		// for ( int i = 0; i < computers.size(); i++ )
		// {
		// 	for ( int k = 0; k < computers.[ i ].size(); k++ )
		// 	{
		// 		if ( k != 1 )
		// 			continue;
		// 
		// 		if ( i == k )
		// 			continue;
		// 
		// 		m[ i ].push_back( k );
		// 	}
		// }

		// 노드를 하나씩 순회
		for ( int i = 0; i < computers.size(); i++ )
		{
			if ( v[ i ] )
				continue;

			answer++;

			v[ i ] = true;

			queue< int > q;
			//auto iter = m.find( i );
			//if ( iter == m.end() )
			//	continue;

			q.push( i );

			while ( !q.empty() )
			{
				int curNode = q.front();
				q.pop();

				for ( int k = 0; k < computers[ curNode ].size(); k++ )
				{
					if ( curNode == k )
						continue;

					if ( computers[ curNode ][ k ] != 1 )
						continue;

					if ( v[ k ] )
						continue;

					q.push( k );
					v[ k ] = true;
				}

			}
		}

		return answer;
	}

	int solution( int n, vector< vector< int > > computers )
	{
		int answer = 0;

		answer = BFS( computers );

		return answer;
	}
