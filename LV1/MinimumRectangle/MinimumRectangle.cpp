#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int answer = 0;
    int maxW{}, maxH{};
    for (const auto& size : sizes)
    {
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);

        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }

    answer = maxW * maxH;
    return answer;
}