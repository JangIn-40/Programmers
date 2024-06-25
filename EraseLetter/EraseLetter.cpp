#include <string>
#include <vector>
#include <iostream>
#include <chrono>
using namespace std;

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};

// 다른사람 코드가 훨씬 빠르네 쩝..
string solution(string my_string, vector<int> indices)
{
	string answer = "";
	Timer timer;
	for (const auto &e : indices)
	{
		my_string[e] = ' ';
	}

	while (my_string.find(' ') != my_string.npos)
	{
		auto e = my_string.find(' ');
		my_string.erase(my_string.begin() + e);
	}

	answer = my_string;
	timer.elapsed();
	return answer;
}

int main()
{
	std::cout << solution("apporoograpemmemprs", { 1, 16, 6, 15, 0, 10, 11, 3 });
}