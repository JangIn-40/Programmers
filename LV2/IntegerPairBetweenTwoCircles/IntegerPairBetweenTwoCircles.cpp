#include <string>
#include <vector>

using namespace std;

// 원의 방정식 생각합시다
long long solution(int r1, int r2)
{
    long long answer = 0;
    for (int i = 1; i <= r2; ++i) 
    {
        long long max = floor(sqrt((long long)r2 * r2 - (long long)i * i));
        long long min = ceil(sqrt((long long)r1 * r1 - (long long)i * i));

        answer += (max - min + 1);
    }

    return answer * 4;
    

    return answer;
}