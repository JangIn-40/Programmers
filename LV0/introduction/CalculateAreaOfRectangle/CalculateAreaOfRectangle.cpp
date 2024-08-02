#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots)
{
	int answer = 0;
	int x1{ dots[0][0] }, y1{ dots[0][1] }, x2{}, y2{};

	for (int i = 1; i < dots.size(); ++i)
	{
		int compareX = dots[i][0];
		int compareY = dots[i][1];
		if (compareX != x1)
		{
			x2 = compareX;
		}
		if (compareY != y1)
		{
			y2 = compareY;
		}
	}

	answer = abs(x1 - x2) * abs(y1 - y2);
	return answer;
}