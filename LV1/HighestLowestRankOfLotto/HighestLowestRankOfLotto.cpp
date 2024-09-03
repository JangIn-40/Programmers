#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    int zeros{}, count{};

    for (int i = 0; i < lottos.size(); ++i)
    {
        if (lottos[i] != 0)
        {
            for (int j = 0; j < win_nums.size(); ++j)
            {
                if (lottos[i] == win_nums[j])
                {
                    ++count;
                    break;
                }
            }
        }
        else
        {
            ++zeros;
        }
    }

    auto GetRank = [](int matchCount) {
        return matchCount >= 2 ? 7 - matchCount : 6;
    };

    answer.push_back(GetRank(count + zeros));
    answer.push_back(GetRank(count));

    return answer;
}
