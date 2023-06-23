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
#include <queue>
#include <stack>

// IO
#define SYNC_WITH_STDIO_FALSE ios_base::sync_with_stdio( false )
#define CIN_TIE_NULLPTR cin.tie( nullptr )
#define IO_SPEED_UPGRADE SYNC_WITH_STDIO_FALSE; CIN_TIE_NULLPTR;

// Loop
#define FOR_INDEX( size ) for( int i = 0 ; i < size ; i++ )
#define FOR_INDEX_SECOND( size ) for( int j = 0 ; j < size ; j++ )
#define FOR_RANGE( container ) for( auto item : container )
#define FOR_RANGE_SECOND( container ) for( auto item2 : container )
#define FOR_RANGE_REF( container ) for( auto& itemRef : container )
#define FOR_RANGE_SECOND_REF( container ) for( auto& itemRef2 : container )

// Code
#define MAIN_BEGIN int main() { IO_SPEED_UPGRADE; 
#define MAIN_END return 0; }


using namespace std;


enum class EChess : int
{
    King = 0, // 킹
    Dol = 1, // 돌
    Max       // 이 열거값의 맥스
};

// 체스판 타입 정의
using Chess = vector< vector< EChess > >;

// 위치 구조체 정의
struct Pos
{
    int x = 0;
    int y = 0;

    Pos operator+( const Pos& addPos ) const
    {
        Pos result;
        result.x = x + addPos.x;
        result.y = y + addPos.y;
        return result;
    }

    bool operator==( const Pos& pos ) const
    {
        if ( x == pos.x && y == pos.y )
            return true;

        return false;
    }
};

Pos kingPos;
Pos dolPos;
Chess chess( 8, vector< EChess >( 8, EChess::Max ) );

void GetStartPos( Pos& pos, string str )
{
    // 첫 좌표가 사이즈 1이하로 올리는 없겠지?
    char xPos = str[ 0 ];

    if ( 'A' <= xPos && 'Z' >= xPos )
        xPos |= 32;

    pos.x = (int)(xPos)-97;

    char yPos = str[ 1 ];

    pos.y = yPos - '0' - 1;
}

void GetPos( Pos& pos, string cmd )
{
    if ( cmd == "R" )
    {
        pos.x = 1;
        pos.y = 0;
    }
    else if ( cmd == "L" )
    {
        pos.x = -1;
        pos.y = 0;
    }
    else if ( cmd == "B" )
    {
        pos.x = 0;
        pos.y = -1;
    }
    else if ( cmd == "T" )
    {
        pos.x = 0;
        pos.y = 1;
    }
    else if ( cmd == "RT" )
    {
        pos.x = 1;
        pos.y = 1;
    }
    else if ( cmd == "LT" )
    {
        pos.x = -1;
        pos.y = 1;
    }
    else if ( cmd == "RB" )
    {
        pos.x = 1;
        pos.y = -1;
    }
    else if ( cmd == "LB" )
    {
        pos.x = -1;
        pos.y = -1;
    }
}

string GetStrPos( Pos& pos )
{
    string str;

    if ( pos.x == 0 ) str += 'A';
    else if ( pos.x == 1 ) str += 'B';
    else if ( pos.x == 2 ) str += 'C';
    else if ( pos.x == 3 ) str += 'D';
    else if ( pos.x == 4 ) str += 'E';
    else if ( pos.x == 5 ) str += 'F';
    else if ( pos.x == 6 ) str += 'G';
    else if ( pos.x == 7 ) str += 'H';

    str += to_string( pos.y + 1 );

    return str;
}

bool TryMovePos( EChess kind, Pos& curPos, Pos& addPos )
{
    Pos nextPos = curPos + addPos;

    if ( nextPos.x < 0 || 7 < nextPos.x )
        return false;

    if ( nextPos.y < 0 || 7 < nextPos.y )
        return false;

    if ( kind == EChess::King )
    {
        if ( dolPos == nextPos )
        {
            if ( !TryMovePos( EChess::Dol, dolPos, addPos ) )
                return false;
        }

        chess[ nextPos.y ][ nextPos.x ] = EChess::King;
    }
    else
    {
        chess[ nextPos.y ][ nextPos.x ] = EChess::Dol;
    }

    chess[ curPos.y ][ curPos.x ] = EChess::Max;

    curPos.x = nextPos.x;
    curPos.y = nextPos.y;

    return true;
}

MAIN_BEGIN
{
    string kingStartPos;
    string dolStartPos;
    int N = 0;
    cin >> kingStartPos >> dolStartPos >> N;

    GetStartPos( kingPos, kingStartPos );
    GetStartPos( dolPos,  dolStartPos );

    chess[ kingPos.y ][ kingPos.x ] = EChess::King;
    chess[ dolPos.y ][ dolPos.x ] = EChess::Dol;

    string nextPos;

    FOR_INDEX( N )
    {
        cin >> nextPos;

        Pos addPos;

        GetPos( addPos, nextPos );

        if ( !TryMovePos( EChess::King, kingPos, addPos ) )
            continue;
    }

    cout << GetStrPos( kingPos ) << "\n" << GetStrPos( dolPos );
}
MAIN_END