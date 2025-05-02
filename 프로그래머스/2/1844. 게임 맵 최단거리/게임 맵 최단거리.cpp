#pragma once
#include <vector>
#include <queue>
#include <set>
#include <map>

using namespace std;



	int dy[] = { -1, 0, 1, 0 }; // 상, 우, 하, 좌 이동을 위한 y 좌표 변화량
	int dx[] = { 0, 1, 0, -1 }; // 상, 우, 하, 좌 이동을 위한 x 좌표 변화량

	int solution( vector< vector< int > > maps )
	{
		int n = maps.size();
		int m = maps[ 0 ].size();

		queue< pair< int, int > > q;
		vector< vector< int > > table( n, vector< int >( m, 0 ) );

		q.push( { 0, 0 } );
		table[ 0 ][ 0 ] = 1;

		while ( q.size() )
		{
			pair< int, int > current = q.front();
			q.pop();

			for ( int i = 0; i < 4; i++ )
			{
				int ny = current.first + dy[ i ];
				int nx = current.second + dx[ i ];

				if ( ny < 0 || nx < 0 || ny >= n || nx >= m || maps[ ny ][ nx ] == 0 || table[ ny ][ nx ] )
					continue;
				table[ ny ][ nx ] = table[ current.first ][ current.second ] + 1;
				q.push( { ny, nx } );
			}
		}

		return table[ n - 1 ][ m - 1 ] > 0 ? table[ n - 1 ][ m - 1 ] : -1;
	}
