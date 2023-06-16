/////////////////////////////////////////////////////////////////////
// @brief    main
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <iomanip>


using namespace std;


int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie( nullptr );

	int valueCount = 0;
	cin >> valueCount;

	set< int > cards;

	for ( int i = 0; i < valueCount; i++ )
	{
		int card = 0;
		cin >> card;

		cards.insert( card );
	}

	int checkCount = 0;
	cin >> checkCount;

	for ( int i = 0; i < checkCount; i++ )
	{
		int card = 0;
		cin >> card;

		auto iter = cards.find( card );
		if ( iter != cards.end() )
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}

	return 0;
}