#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

vector<int> FindStartLocation(vector<string> park)
{
	int y{};
	int x;
	vector<int> location;
	for (const string& coordinate : park)
	{
		x = 0;
		for (const char& ch : coordinate)
		{
			if (ch == 'S')
			{
				location.emplace_back(y);
				location.emplace_back(x);
				return location;
			}
			++x;
		}
		++y;
	}
	return location;
}

void MoveLocation(const vector<string>& park, vector<int>& answer, char direction, int num)
{
	switch (direction)
	{
	case 'E':
		if (answer[1] + num < park[0].size())
		{
			for (int i = 1; i <= num; ++i)
			{
				if (park[answer[0]][answer[1] + i] == 'X')
					return;
			}
			answer[1] = answer[1] + num;
		}
		break;
	case 'W':
		if (answer[1] - num >= 0)
		{
			for (int i = 1; i <= num; ++i)
			{
				if (park[answer[0]][answer[1] - i] == 'X')
					return;
			}
			answer[1] = answer[1] - num;
		}
		break;
	case 'S':
		if (answer[0] + num < park.size())
		{
			for (int i = 1; i <= num; ++i)
			{
				if (park[answer[0] + i][answer[1]] == 'X')
					return;
			}
			answer[0] = answer[0] + num;
		}
		break;
	case 'N':
		if (answer[0] - num >= 0)
		{
			for (int i = 1; i <= num; ++i)
			{
				if (park[answer[0] - i][answer[1]] == 'X')
					return;
			}
			answer[0] = answer[0] - num;
		}
		break;
	default:
		break;
	}
}

vector<int> solution(vector<string> park, vector<string> routes)
{
	vector<int> answer = FindStartLocation(park);
	stringstream ss;

	for (const string& order : routes)
	{
		char direction{};
		int num{};
		while (ss << order)
		{
			ss >> direction >> num;
		}
		ss.clear();

        cout << "prev" << endl;
		int i{}, j{};
        for (const auto& str : park)
        {
            j = 0;
            for (const auto& ch : str)
            {
                if (i == answer[0] && j == answer[1])
                {
                    cout << " S ";
                }
                else
                {
                    cout << ch << " ";
                }
                j++;
            }
            i++;
            cout << endl;
        }
        cout << endl;

		MoveLocation(park, answer, direction, num);

        cout << order << endl;
        cout << "post" << endl;
        i = 0;
        for (const auto& str : park)
        {
            j = 0;
            for (const auto& ch : str)
            {
                if (i == answer[0] && j == answer[1])
                {
                    cout << " S ";
                }
                else
                {
                    cout << ch << " ";
                }
                j++;
            }
            i++;
            cout << endl;
        }
        cout << endl;

		std::cout << "x: " << answer[1] << " y: " << answer[0] << endl << endl;
	}

	return answer;
}

int main()
{
	solution({ "OSO","OOO","OXO","OOO" }, { "E 2","S 3","W 1" });
}