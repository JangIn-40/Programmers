#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

string solution(vector<string> survey, vector<int> choices) 
{
    string answer = "";
    unordered_map<char, int> personalityScore;

    for (int i = 0; i < survey.size(); ++i)
    {
        if (choices[i] < 4)
        {
            personalityScore[survey[i][0]] += 4 - choices[i];
        }
        else
        {
            personalityScore[survey[i][1]] += choices[i] - 4;
        }
    }

    if (personalityScore['R'] >= personalityScore['T'])
    {
        answer.push_back('R');
    }
    else
    {
        answer.push_back('T');
    }
    if (personalityScore['C'] >= personalityScore['F'])
    {
        answer.push_back('C');
    }
    else
    {
        answer.push_back('F');
    }
    if (personalityScore['J'] >= personalityScore['M'])
    {
        answer.push_back('J');
    }
    else
    {
        answer.push_back('M');
    }
    if (personalityScore['A'] >= personalityScore['N'])
    {
        answer.push_back('A');
    }
    else
    {
        answer.push_back('N');
    }

    return answer;
}

int main()
{
    cout << solution({ "AN", "CF", "MJ", "RT", "NA" }, { 5, 3, 2, 7, 5 });
}