#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list)
{
	int answer = -1;

	for (int i = 0; i < num_list.size(); ++i)
	{
		if (num_list[i] < 0)
			return answer = i;
	}

	return answer;
}

int main()
{
	solution({ 12, 4, 15, 46, 38, -2, 15 });
}