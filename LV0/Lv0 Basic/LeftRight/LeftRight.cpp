#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 컨테이너 기능좀 익숙해지자 코드 이렇게 안길어도 됨
vector<string> solution(vector<string> str_list)
{
	vector<string> answer;
	vector<int> index(2, -1);

	for (int i = 0; i < str_list.size(); ++i)
	{
		if (str_list[i] == "l")
		{
			index[0] = i;
			break;
		}
		else if (str_list[i] == "r")
		{
			index[1] = i;
			break;
		}

	}

	if (index[0] != -1)
	{
		for (int i = 0; i < index[0]; ++i)
		{
			answer.push_back(str_list[i]);
		}
	}
	else if (index[1] != -1)
	{
		for (int i = index[1] + 1; i < str_list.size(); ++i)
		{
			answer.push_back(str_list[i]);
		}
	}

	return answer;
	

	
}

int main()
{
	auto e = solution({ "r", "u", "l", "r" });
	for (auto &i : e)
	{
		std::cout << i << " ";
	}
}