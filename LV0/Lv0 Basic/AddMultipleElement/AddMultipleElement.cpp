#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list)
{
	int answer = 0;

	int sum{}, multiple{1};
	for (const int &e : num_list)
	{
		sum += e;
		multiple *= e;
	}

	// 삼항연산자 써줄 필요없음 합의 제곱도 비교연산자에서 사용해주면 됨
	sum *= sum;
	answer = sum > multiple ? 1 : 0;
	return answer;
}

int main()
{
	vector<int> num_list{ 5, 7, 8, 3 };
	std::cout << solution(num_list);
}