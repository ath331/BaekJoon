/////////////////////////////////////////////////////////////////////
// @brief    main
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>


using namespace std;


int main()
{
	int a = 0;
	int b = 0;
	
	string s;

	cin >> a >> b;

	if ( a == b )
		s = "==";
	else if ( a > b )
		s = ">";
	else
		s = "<";

	cout << s;

	return 0;
}