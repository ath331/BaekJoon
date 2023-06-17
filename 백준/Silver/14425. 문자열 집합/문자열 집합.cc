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


#define SYNC_WITH_STDIO_FALSE ios_base::sync_with_stdio( false )
#define CIN_TIE cin.tie( nullptr )


using namespace std;


// const int NUM_ALPHABETS = 26;
// int toIndex( char ch ) { return ch - 'a'; }
// 
// struct TrieNode {
// 	TrieNode* children[ NUM_ALPHABETS ];
// 	// unordered_map<string, TrieNode*> children;
// 	bool isEnd;
// 
// 	TrieNode() : children(), isEnd( false ) {}
// 
// 	void Insert( string& key, int index )
// 	{
// 		if ( index == key.length() - 1 )
// 			isEnd = true;
// 		else
// 		{
// 			int next = toIndex( key[ index ] );
// 			if ( children[ next ] == nullptr )
// 				children[ next ] = new TrieNode;
// 			children[ next ]->Insert( key, index + 1 );
// 		}
// 	}
// 
// 	bool Find_1( string& key, int depth )
// 	{   // 접두사로서 검색 되더라도 true 를 리턴하게끔 한 함수
// 		if ( depth == key.length() - 1 )
// 			return true;
// 		int next = toIndex( key[ depth ] );
// 		if ( children[ next ] == nullptr )
// 			return false;
// 		return children[ next ]->Find_1( key, depth + 1 );
// 	}
// 
// 	bool Find_2( string& key, int depth )
// 	{  // 완전히 일치하는 단어 단위로만 찾고 true 를 리턴하게끔 한 함수
// 		if ( depth == key.length() - 1 && isEnd )
// 			return true;
// 		if ( depth == key.length() - 1 && !isEnd )
// 			return false;
// 		int next = toIndex( key[ depth ] );
// 		if ( children[ next ] == nullptr )
// 			return false;
// 		return children[ next ]->Find_2( key, depth + 1 );
// 	}
// };

int main()
{
	//int answer = 0;
	//vector< string > words;
	//vector< string > checkWords;
	//
	//int N = 0, M = 0;
	//
	//cin >> N >> M;
	//
	//for ( int i = 0; i < N; i++ )
	//{
	//	string str;
	//	cin >> str;
	//
	//	words.push_back( str );
	//}
	//
	// TrieNode root;
	// for ( string word : words )
	// 	root.Insert( word, 0 );
	// 
	// for ( int i = 0; i < M; i++ )
	// {
	// 	string str;
	// 	cin >> str;
	// 
	// 	checkWords.push_back( str );
	// }
	// 
	// for ( string checkWord : checkWords )
	// {
	// 	if ( root.Find_2( checkWord, 0 ) )
	// 		answer++;
	// }
	//
	//cout << answer;

	map< string, bool > m;
	int N, M;
	string str;
	int res = 0;

	cin >> N >> M;
	for ( int i = 0; i < N; i++ )
	{
		cin >> str;
		m.insert( pair<string, bool>( str, true ) );
	}

	for ( int i = 0; i < M; i++ )
	{
		cin >> str;
		if ( m[ str ] == true )
			res++;
	}
	cout << res;

	return 0;
}