#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list)
{
	int answer = 0;

	int comp{};
	for (int i = 0; i < num_list.size(); ++i)
	{
		if (i % 2 == 0)
			comp += num_list[i];
		else
			answer += num_list[i];
	}
	
	answer = answer > comp ? answer : comp;
	return answer;
}
