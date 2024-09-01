#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// pair있는것 기억하자
vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;
    vector<int> reachStage(N + 1);
    vector<int> stayStage(N + 1);

    for (const int& stage : stages)
    {
        ++stayStage[stage - 1];
        for (int i = 0; i < stage; ++i)
        {
            ++reachStage[i];
        }
    }

    vector<pair<float, int>> failRates;
    for (int i = 0; i < N; ++i)
    {
        float failRate = (reachStage[i] == 0) ? 0 : (float)stayStage[i] / reachStage[i];
        failRates.push_back({ failRate, i + 1 });
    }

    sort(failRates.begin(), failRates.end(), [](const pair<float, int>& a, const pair<float, int>& b) {
        if (a.first != b.first)
        {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    for (const auto& p : failRates)
    {
        answer.push_back(p.second);
    }

    return answer;
}

int main()
{
    auto answer = solution(5, { 2, 1, 2, 6, 2, 4, 3, 3 });
    for (const int& num : answer)
    {
        cout << num << endl;
    }
}