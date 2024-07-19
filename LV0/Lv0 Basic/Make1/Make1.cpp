#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list)
{
	int answer = 0;

	bool test{true};
	while (test)
	{
		test = false;
		for (auto &e : num_list)
		{
			if (e & 1 && e != 1)
			{
				e = (e - 1) / 2;
				test = true;
				++answer;
			}
			else if(!(e & 1) && e != 1)
			{
				e /= 2;
				test = true;
				++answer;
			}	
		}
	}

	return answer;
}

int main()
{
	std::cout << solution({ 12, 4, 15, 1, 14 });
}