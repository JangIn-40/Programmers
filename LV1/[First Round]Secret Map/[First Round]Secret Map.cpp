#include <string>
#include <vector>
using namespace std;

// TODO: 내가 한것이 아님 반드시 숙지하고 넘어가자
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) 
{
    vector<string> answer;

    for (int i = 0; i < arr1.size(); ++i)
    {
        int num = arr1[i] | arr2[i];
        string map;

        for (int j = n - 1; j >= 0; --j)
        {
            if (num & (1 << j))
            {
                map += '#';
            }
            else
            {
                map += ' ';
            }
        }

        answer.emplace_back(map);
    }

    return answer;
}