#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> picture, int k)
{
	vector<string> answer(picture.size() * k);

	for (int i = 0; i < picture.size(); ++i)
	{
		for (int j = 0; j < picture[i].size(); ++j)
		{
			int temp = k;
			while (temp > 0)
			{
				answer[i * k].push_back(picture[i][j]);
				--temp;
			}
		}

		for (int j = 0; j < k; ++j)
		{
			answer[i * k + j] = answer[i * k];
		}
	}

	return answer;
}

int main()
{
	solution({ ".xx...xx.", "x..x.x..x", "x...x...x", ".x.....x.", "..x...x..", "...x.x...", "....x...." }, 2);
}