#include <string>
#include <vector>

using namespace std;

// 문제에서는 e.find를 한개만 사용해도 가능하다
int solution(vector<string> order)
{
	int answer = 0;

	const string americano = "americano";
	const string cafelatte = "cafelatte";
	const string anything = "anything";
	const int americanoPrice = 4500;
	const int cafelattePrice = 5000;

	for (const auto &e : order)
	{
		if (e.find(americano) != e.npos)
			answer += americanoPrice;
		else if (e.find(cafelatte) != e.npos)
			answer += cafelattePrice;
		else if (e.find(anything) != e.npos)
			answer += americanoPrice;
	}

	return answer;
}

int main()
{
	solution({ "cafelatte", "americanoice", "hotcafelatte", "anything" });
}