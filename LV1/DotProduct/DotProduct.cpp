#include <string>
#include <vector>

using namespace std;

// TODO: inner_prodcut라는 함수가 있음 헤더 numeric
int solution(vector<int> a, vector<int> b) 
{
    int answer = 0;

    for (int i = 0; i < a.size(); ++i)
    {
        answer += a[i] * b[i];
    }

    return answer;
}