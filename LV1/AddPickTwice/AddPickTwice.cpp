#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    set<int> s;

    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        int num = numbers[i];
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            s.insert(num + numbers[j]);
        }
    }

    for (const int& num : s)
    {
        answer.push_back(num);
    }

    for (const int& num : answer)
    {
        cout << num << " ";
    }

    return answer;
}

int main()
{
    solution({ 2, 1, 3, 4, 1 });
}