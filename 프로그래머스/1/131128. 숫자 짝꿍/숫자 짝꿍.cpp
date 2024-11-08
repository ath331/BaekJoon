#include <string>
#include <vector>
#include <algorithm>


using namespace std;


string solution( string X, string Y )
{
    std::string answer = "";

    // 두 문자열의 숫자 빈도를 저장하는 배열 (0 ~ 9)
    std::vector< int > xCount( 10, 0 ), yCount( 10, 0 );

    // X의 각 숫자 빈도를 xCount에 저장
    for ( const char xc : X )
    {
        xCount[ xc - '0' ]++;
    }

    // Y의 각 숫자 빈도를 yCount에 저장
    for ( const char yc : Y )
    {
        yCount[ yc - '0' ]++;
    }

    // 공통된 숫자의 빈도를 찾아 결과 문자열 생성
    for ( int digit = 9; digit >= 0; --digit )
    {
        int commonCount = std::min( xCount[ digit ], yCount[ digit ] );
        if ( commonCount > 0 )
        {
            answer += std::string( commonCount, '0' + digit );
        }
    }

    // 결과가 비어 있으면 "-1" 반환
    if ( answer.empty() ) 
        return "-1";

    // 결과가 "0"만 있을 경우 "0" 반환
    if ( answer[ 0 ] == '0' ) 
        return "0";

    return answer;
}