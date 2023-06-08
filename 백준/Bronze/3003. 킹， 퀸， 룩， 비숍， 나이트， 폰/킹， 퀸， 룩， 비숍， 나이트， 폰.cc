/////////////////////////////////////////////////////////////////////
// @brief    main
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main()
{
	vector< int > answer = { 1, 1, 2, 2, 2, 8 };
	vector< int > v( 6, 0 );

	for ( int i = 0; i < v.size(); i++ )
	{
		cin >> v[ i ];
	}

	for ( int i = 0; i < v.size(); i++ )
	{
		cout << answer[ i ] - v[ i ] << " ";
	}

	return 0;
}