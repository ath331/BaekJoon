#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <stack>


using namespace std;


bool solution( string str )
{
	stack< char > container;

	for ( char s : str )
	{
		if ( s == ')' )
		{
			if ( container.empty() )
				return false;

			char top = container.top();
			if ( top == '(' )
				container.pop();
		}
		else
		{
			container.push( s );
		}
	}

	return container.empty();
}
