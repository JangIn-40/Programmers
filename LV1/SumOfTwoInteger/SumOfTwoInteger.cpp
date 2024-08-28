#include <string>
#include <vector>

using namespace std;

// TODO: 등차수열의 합 공식으로 시간복잡도를 O(1)로 만들 수 있다.
long long solution(int a, int b) 
{
    long long answer = 0;

    if (a > b)
    {
        swap(a, b);
    }

    for (int i = a; i <= b; ++i)
    {
        answer += i;
    }
    // answer = ((long long)b - a + 1) * ((long long)a + b) / 2;

    return answer;
}