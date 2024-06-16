#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list)
{
	int answer = 0;

	string odd{}, even{};
	for (const int &e : num_list)
	{
		e % 2 == 0 ? even += to_string(e) : odd += to_string(e);
	}

	answer = stoi(even) + stoi(odd);
	return answer;
}

int main()
{
	vector<int> num_list{ 5, 7, 8, 3 };
	std::cout << solution(num_list);
}