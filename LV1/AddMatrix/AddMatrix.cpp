#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size()));

    for (int j = 0; j < arr1.size(); ++j)
    {
        for (int i = 0; i < arr1[j].size(); ++i)
        {
            answer[j][i] = arr1[j][i] + arr2[j][i];
        }
    }

    return answer;
}