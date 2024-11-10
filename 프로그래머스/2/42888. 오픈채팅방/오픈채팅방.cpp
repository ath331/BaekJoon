#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <sstream>


using namespace std;


void SplitLog ( const std::string& log, vector< string >& destVec )
{
	std::istringstream iss( log );
	std::vector< std::string > tokens;
	std::string word;

	while ( iss >> word )
	{  
		// 공백을 기준으로 한 단어씩 읽음
		destVec.push_back( word );
	}
}

vector<string> solution( vector<string> record )
{
	vector< string > answer;

	// key = uid
	std::map< string, string > nameMap;

	for ( const string& log : record )
	{
		vector< string > splitedStr;
		SplitLog( log, splitedStr );

		if ( splitedStr.size() < 3 )
			continue;

		nameMap[ splitedStr[ 1 ] ] = splitedStr[ 2 ];
	}

	for ( const string& log : record )
	{
		vector< string > splitedStr;
		SplitLog( log, splitedStr );

		string name = nameMap[ splitedStr[ 1 ] ];

		if ( splitedStr[ 0 ] == "Enter" )
			answer.push_back( name + "님이 들어왔습니다." );
		else if ( splitedStr[ 0 ] == "Leave" )
			answer.push_back( name + "님이 나갔습니다." );
	}

	return answer;
}