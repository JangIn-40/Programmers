#include <string>
#include <vector>
#include <iostream>
using namespace std;

void Print(vector<vector<int>> answer)
{
	for (const auto &e : answer)
	{
		for (const auto &ele : e)
			std::cout << ele << " ";
		std::cout << std::endl;
	}
	std::cout << endl;
}

// 좀더 빨리 반복문을 빠져나가는 방법은 없을까?
vector<vector<int>> solution(int n)
{
	vector<vector<int>> answer(n, vector<int>(n));
	int row{}, col{}, num{1};
	int temp = n, block{0};

	while (block * 2 < n)
	{
		row = block; col = block;
		for (; col < temp - block; ++col, ++num)
			answer[row][col] = num;

		Print(answer);

		++row, --col;
		for (; row < temp - block; ++row, ++num)
			answer[row][col] = num;

		Print(answer);

		--row, --col;
		for (; col >= block; --col, ++num)
			answer[row][col] = num;

		Print(answer);

		++block, --row, ++col;
		for(; row >= block; --row, ++num)
			answer[row][col] = num;

		Print(answer);
	}

	return answer;
}

int main()
{
	solution(10);
}