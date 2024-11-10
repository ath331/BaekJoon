#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <sstream>


using namespace std;


vector<int> solution( int n, vector<string> words )
{
	vector<int> answer;

	std::unordered_set< string > usedWordSet;

	string lastWord;

	int person = 0;
	int loop   = 1;

	for ( int i = 0; i < words.size(); i++ )
	{
		person++;
		if ( n < person )
		{
			person = 1;
			loop++;
		}

		string word = words[ i ];

		// 이미 말한 단어라면
		auto iter = usedWordSet.find( word );
		if ( iter != usedWordSet.end() )
		{
			answer.push_back( person );
			answer.push_back( loop   );
			return answer;
		}

		// 이어지지 않는 단어라면
		if ( !lastWord.empty() && lastWord[ lastWord.size() - 1 ] != word[ 0 ] )
		{
			answer.push_back( person );
			answer.push_back( loop   );
			return answer;
		}

		usedWordSet.insert( word );
		lastWord = word;
	}

	return { 0, 0 };
}

