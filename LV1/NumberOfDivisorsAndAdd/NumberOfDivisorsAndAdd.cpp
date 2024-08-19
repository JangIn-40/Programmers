#include <string>
#include <vector>

using namespace std;

// TODO: 다른 사람 풀이에 재귀호출로 푸는 방식이 있음
int solution(int left, int right)
{
    int answer = 0;

    for (int i = left; i <= right; ++i)
    {
        int num{};
        for (int j = 1; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                ++num;
                if (j != i / j)
                {
                    ++num;
                }
            }
        }

        if (num & 1)
        {
            answer -= i;
        }
        else
        {
            answer += i;
        }
    }

    return answer;
}
