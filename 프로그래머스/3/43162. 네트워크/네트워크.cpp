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

		vector< bool > v( computers.size(), false );

		// 노드를 하나씩 순회
		for ( int i = 0; i < computers.size(); i++ )
		{
			if ( v[ i ] )
				continue;

			answer++;

			v[ i ] = true;

			queue< int > q;
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

	vector< bool > isVisited;

	void DFS( const vector< vector< int > >& computers, int index )
	{
		if ( isVisited[ index ] )
			return;

		isVisited[ index ] = true;

		for ( int k = 0; k < computers[ index ].size(); k++ )
		{
			if ( computers[ index ][ k ] != 1 )
				continue;

			if ( index == k )
				continue;

			DFS( computers, k );
		}
	}

	int solution( int n, vector< vector< int > > computers )
	{
		int answer = 0;

		//answer = BFS( computers );

		isVisited.resize( n, false );

		for ( int i = 0; i < computers.size(); i++ )
		{
			if ( isVisited[ i ] )
				continue;

			answer++;

			DFS( computers, i );
		}

		return answer;
	}
