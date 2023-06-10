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

	string reverseStr;

	for ( auto rIter = str.rbegin(); rIter != str.rend(); rIter++ )
	{
		reverseStr += *rIter;
	}

	if ( str == reverseStr )
	{
		cout << 1;
		return 0;
	}
	else
	{
		cout << 0;
		return 0;
	}

	return 0;

}