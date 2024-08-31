#include <string>

using namespace std;

int solution(string dartResult) 
{
    int answer = 0;
    int scores[3]{};
    int i{};
    string temp;
    for (const char& ch : dartResult)
    {
        if (ch >= '0' && ch <= '9')
        {
            temp += ch;
        }
        else
        {
            if (!temp.empty())
            {
                scores[i] = stoi(temp);
                temp.clear();
            }
            
            switch (ch)
            {
            case 'S':
                ++i;
                break;
            case 'D':
                scores[i] = scores[i] * scores[i];
                ++i;
                break;
            case 'T':
                scores[i] = scores[i] * scores[i] * scores[i];
                ++i;
                break;
            case '*':
                --i;
                scores[i] *= 2;
                if (i > 0)
                {
                    scores[i - 1] *= 2;
                }
                ++i;
                break;
            case '#':
                --i;
                scores[i] = -scores[i];
                ++i;
                break;
            }
        }
    }

    for (const int& score : scores)
    {
        answer += score;
    }
    return answer;
}

int main()
{
    solution("1D2S#10S");
}