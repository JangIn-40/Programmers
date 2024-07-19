#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list)
{
	vector<int> answer;

	for (auto it = arr.begin(); it != arr.end();)
	{
		bool isSame = false;
		for (const auto &e : delete_list)
		{
			if (*it == e)
			{
				isSame = true;
				it = arr.erase(it);
			}
		}
		if(!isSame)
			++it;
	}

	answer = arr;
	return answer;
}

int main()
{
	solution({ 293, 1000, 395, 678, 94 }, { 94, 777, 104, 1000, 1, 12 });
}