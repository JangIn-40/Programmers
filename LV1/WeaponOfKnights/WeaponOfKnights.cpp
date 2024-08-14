#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power)
{
	int answer = 0;
    std::vector<int> cd;

    for (int i = 1; i <= number; ++i)
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
        cd.emplace_back(num);
    }

    for (int& num : cd)
    {
        if (num > limit)
        {
            num = power;
        }
        answer += num;
    }

	return answer;
}