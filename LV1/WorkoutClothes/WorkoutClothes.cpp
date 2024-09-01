#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 프로그래머스가 리눅스 환경인건가? 비쥬얼스튜디오에서는 오류나는데 프로그래머스에서는 통과함
// reserve[i + 1]이 부분이 인덱스 범위를 넘어가서 그런거 같은데 왜 통과를 할까? 수정완
int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    vector<bool> haveClothes(n + 1, true);
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (const int& num : lost)
    {
        haveClothes[num] = false;
    }


    for (int i = 0; i < reserve.size(); ++i)
    {
        if (!haveClothes[reserve[i]])
        {
            haveClothes[reserve[i]] = true;
            continue;
        }

        if (!haveClothes[reserve[i] - 1])
        {
            haveClothes[reserve[i] - 1] = true;
        }
        else if (reserve[i] < n && !haveClothes[reserve[i] + 1] && (i + 1 >= reserve.size() || reserve[i] + 1 != reserve[i + 1]))
        {
            haveClothes[reserve[i] + 1] = true;
        }
    }

    for (int i = 1; i < haveClothes.size(); ++i)
    {
        if (haveClothes[i])
        {
            ++answer;
        }
    }

    return answer;
}

int main()
{
    solution(5, { 5, 3 }, { 4, 2 });
}