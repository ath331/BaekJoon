#pragma once
#include <string>
#include <vector>
#include <queue>
#include <map>


using namespace std;



	int solution( string begin, string target, vector< string > words )
	{
		map< string, int > m;
		queue< string > q;

		q.push( begin );
		m[ begin ] = 0;

		while ( !q.empty() )
		{
			string curWord = q.front();
			q.pop();

			if ( curWord == target )
				break;

			for ( const string& word : words )
			{
				if ( m.find( word ) != m.end() )
					continue;

				int diffCont = 0;
				for ( int i = 0; i < word.size(); i++ )
				{
					if ( word[ i ] != curWord[ i ] )
						diffCont++;
				}

				if ( diffCont != 1 )
					continue;

				q.push( word );
				m[ word ] = m[ curWord ] + 1;
			}
		}

		auto iter = m.find( target );
		if ( iter == m.end() )
			return 0;

		return iter->second;
	}
