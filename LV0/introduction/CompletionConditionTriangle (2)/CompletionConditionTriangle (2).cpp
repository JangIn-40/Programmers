#include <string>
#include <vector>
#include <iostream>
using namespace std;

// TODO: 와우;; 수학공식으로 간략화한 코드 있음
int solution(vector<int> sides)
{
	int answer = 0;

	if (sides[0] > sides[1])
	{
		swap(sides[0], sides[1]);
	}

    int num = sides[1] - sides[0];
	while (++num <= sides[1])
	{
		++answer;
	}

	num = sides[1];
	while(sides[1] + sides[0] > ++num)
	{
		++answer;
	}

	return answer;
}

int main()
{
	solution({ 3, 6 });
}