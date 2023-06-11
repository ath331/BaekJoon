/////////////////////////////////////////////////////////////////////
// @brief    main
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;


int main()
{
	string str;
	cin >> str;

	transform( str.begin(), str.end(), str.begin(), ::toupper );

	map< string, int > count;

	for ( char iter : str )
	{
		string key;
		key += iter;
		count[ key ] += 1;
	}

	auto pr = std::max_element
	(
		std::begin( count ), std::end( count ),
		[]( const pair< string, int >& p1, const pair< string, int >& p2 ) {
			return p1.second < p2.second;
		}
	);

	string maxKey = pr->first;
	int maxValue = pr->second;

	int maxValueCount = 0;
	for ( auto iter : count )
	{
		if ( iter.second == maxValue )
			maxValueCount++;
	}

	if ( 1 < maxValueCount )
		cout << "?";
	else
		cout << maxKey;

	return 0;
}