#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    sort(nums.begin(), nums.end());

    int temp{};
    for (const int& num : nums)
    {
        if (temp != num)
        {
            temp = num;
            ++answer;
            if (answer >= nums.size() / 2)
            {
                break;
            }
        }
    }

    return answer;
}