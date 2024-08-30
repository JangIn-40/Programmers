#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// end()가 어디를 가리키고 있는지 기억좀하자
vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;


    for (const auto& vec : commands)
    {
        vector<int> temp = array;
        sort(temp.begin() + vec[0] - 1, temp.begin() + vec[1]);
        answer.emplace_back(*(temp.begin() + vec[0] + vec[2] - 2));
    }

    return answer;
}

int main()
{
    solution({ 1, 5, 2, 6, 3, 7, 4 }, { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} });
}