#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> answer;
    vector<int> person1{ 1, 2, 3, 4, 5 }, person2{ 2, 1, 2, 3, 2, 4, 2, 5 },
        person3{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int score1{}, score2{}, score3{};

    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == person1[i % person1.size()])
        {
            ++score1;
        }
        if (answers[i] == person2[i % person2.size()])
        {
            ++score2;
        }
        if (answers[i] == person3[i % person3.size()])
        {
            ++score3;
        }
    }

    int highScore = max({ score1, score2, score3 });
    
    if (score1 == highScore)
    {
        answer.emplace_back(1);
    }
    if (score2 == highScore)
    {
        answer.emplace_back(2);
    }
    if (score3 == highScore)
    {
        answer.emplace_back(3);
    }
    return answer;
}