#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int k, vector<int> score)
{
	vector<int> answer;
	priority_queue<int, std::vector<int>, greater<int>> fame;

	for (const int& num : score)
	{

		fame.push(num);
		
		if (fame.size() > k)
		{
			fame.pop();
		}
		
		answer.push_back(fame.top());
	}

	return answer;
}

int main()
{
	solution(3, { 100, 30, 40, 150, 300, 200, 200 });
}