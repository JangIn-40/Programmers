#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 프로그래머스에서는 algorithm 추가 안할시 std::find가 없다고 나옴
int solution(vector<int> num_list, int n)
{
	int answer = 0;

	/*if (std::find(num_list.begin(), num_list.end(), n) != num_list.end())
		answer = 1;*/
	for (const auto &e : num_list)
	{
		if (e == n)
			answer = 1;
	}

	return answer;
}

int main()
{
	solution({ 1, 2, 3, 4, 5 }, 3);
}