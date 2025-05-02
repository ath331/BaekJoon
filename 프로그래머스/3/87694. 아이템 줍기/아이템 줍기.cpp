#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <queue>


using namespace std;



	int solution( vector< vector< int > > rectangle, int characterX, int characterY, int itemX, int itemY )
	{
		int dy[ 4 ] = { -1, +1, 0, 0 };
		int dx[ 4 ] = { 0, 0, -1, +1 };

		// 좌표 2배씩
		characterX *= 2;
		characterY *= 2;
		itemX *= 2;
		itemY *= 2;

		int answer = 0;

		// y, x
		int map[ 102 ][ 102 ] = { 0, };

		// 좌표 2배씩
		for ( int i = 0; i < rectangle.size(); i++ )
		{
			for ( int k = 0; k < rectangle[ i ].size(); k++ )
			{
				rectangle[ i ][ k ] *= 2;
			}
		}

		for ( int i = 0; i < rectangle.size(); i++ )
		{
			int minX = rectangle[ i ][ 0 ];
			int minY = rectangle[ i ][ 1 ];
			int maxX = rectangle[ i ][ 2 ];
			int maxY = rectangle[ i ][ 3 ];

			// 사각형 채우기
			for ( int y = minY; y <= maxY; y++ )
			{
				for ( int x = minX; x <= maxX; x++ )
				{
					map[ y ][ x ] = 1;
				}
			}
		}

		for ( int i = 0; i < rectangle.size(); i++ )
		{
			int minX = rectangle[ i ][ 0 ];
			int minY = rectangle[ i ][ 1 ];
			int maxX = rectangle[ i ][ 2 ];
			int maxY = rectangle[ i ][ 3 ];

			// 테두리 말고 지우기
			for ( int y = minY + 1; y < maxY; y++ )
			{
				for ( int x = minX + 1; x < maxX; x++ )
				{
					map[ y ][ x ] = 0;
				}
			}
		}

		// for ( int y = 0; y < 51; y++ )
		// {
		// 	for ( int x = 0; x < 51; x++ )
		// 	{
		// 		if ( map[ y ][ x ] == 1 )
		// 			cout << "@";
		// 		else
		// 			cout << "*";
		// 	}
		// 
		// 	cout << endl;
		// }

		queue< pair< int, int > > q;
		vector< vector< int > > isVisited( 102, vector< int >( 102, 0 ) );

		q.push( { characterY, characterX } );
		isVisited[ characterY ][ characterX ] = 0;

		while ( !q.empty() )
		{
			pair< int, int > curPos = q.front();
			q.pop();

			int curX = curPos.second;
			int curY = curPos.first;

			if ( curX == itemX && curY == itemY )
				return isVisited[ curY ][ curX ] / 2;

			for ( int d = 0; d < 4; d++ )
			{
				int ny = curY + dy[ d ];
				int nx = curX + dx[ d ];

				if ( map[ ny ][ nx ] == 1 && isVisited[ ny ][ nx ] == 0 )
				{
					isVisited[ ny ][ nx ] = isVisited[ curY ][ curX ] + 1;
					q.push( { ny, nx } );
				}
			}
		}

		return answer;
	}
