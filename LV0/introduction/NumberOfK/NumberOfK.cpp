#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k)
{
    int answer = 0;

    for (int num = i; num <= j; ++num)
    {
        int temp = num;
        while (temp)
        {
            if (temp % 10 == k)
            {
                ++answer;
            }
            temp /= 10;
        }
    }

    return answer;
}