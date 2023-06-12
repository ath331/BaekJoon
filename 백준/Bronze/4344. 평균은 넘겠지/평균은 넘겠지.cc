/////////////////////////////////////////////////////////////////////
// @brief    main
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <iomanip>


using namespace std;


int main()
{

	int a = 0;
	cin >> a;

	for ( int i = 0; i < a; i++ )
	{
		int b = 0;
		cin >> b;

		vector< double > nums;

		while ( nums.size() < b )
		{
			double c = 0.0f;
			cin >> c;

			nums.push_back( c );
		}

		double avg = accumulate( nums.begin(), nums.end(), 0.0 ) / (double)( nums.size() );

		double under = std::count_if( nums.begin(), nums.end(),
									  [ avg ]( int elem )
									  {
										  return elem > avg;
									  } );

		double answer = under / (double)( nums.size() );
		answer *= 100.0f;
		cout << std::fixed << std::setprecision( 3 ) << answer << "%" << endl;
	}

	return 0;
}