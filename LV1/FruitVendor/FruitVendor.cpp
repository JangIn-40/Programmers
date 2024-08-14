#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, int m, vector<int> score)
{
	int answer = 0;
    if (score.size() < m)
    {
        return answer;
    }

    sort(score.begin(), score.end());
    for (int i = score.size() - 1; i >= m - 1; i -= m)
    {
        cout << " score: " << score[i - m + 1] << " i: " << i << " answer: " << answer << endl;
        answer += score[i - m + 1] * m;
    }

	return answer;
}

int main()
{
    solution(4, 3, { 1, 1, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, });
}