#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// TODO: 질문하기에서 힌트를 얻음 그리디 알고리즘 이용한 풀이, 숙지하고 넘어갈것
int solution(vector<vector<int>> targets) 
{
    int answer = 0;

    sort(targets.begin(), targets.end(), [](vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    });

    int currentShot = -1;
    for (const auto& target : targets)
    {
        int start = target[0];
        int end = target[1];

        if (start < currentShot && end >= currentShot)
        {
            continue;
        }
        else
        {
            ++answer;
            currentShot = end;
        }
    }

    return answer;
}