#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

// TODO: 투포인터 방식으로도 푼 방식이 다른사람 풀이에 있음 하지만 시간복잡도로만 따지면
//       내 코드가 더 효율적인듯 하다
string solution(string X, string Y)
{
	string answer = "";
	unordered_map<char, int> uM;

	for (const char& ch : X)
	{
		++uM[ch];
	}

	unordered_map<char, int> temp = uM;
    bool isPair{};
	for (const char& ch : Y)
	{
		if (uM.find(ch) != uM.end())
		{
			--uM[ch];
            isPair = true;
		}
	}

    if (!isPair)
    {
        return answer = "-1";
    }

	for (const auto& pair : uM)
	{
		if (pair.second != temp[pair.first])
		{
            for (int i = 0; i < temp[pair.first] - pair.second && i < temp[pair.first]; ++i)
            {
                answer += pair.first;
            }
		}
	}

    sort(answer.begin(), answer.end(), greater<char>());
    if (answer[0] == '0')
    {
        return answer = '0';
    }

	return answer;
}

int main()
{
    
    cout << solution("552", "12555");
}