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

// TODO: 여기 시간재는 함수있음 근데 이렇게 시간재는거 아님 그냥 궁금하면 해볼것
// 이걸로 시간쟀을때 다른사람 코드가 내꺼보다 열배 빠름 
// 배열을 복사하는것에서 추가시간이 발생하는듯 배열을 복사안하고 할 생각을 어떻게 했을까 ㅇㅅㅇ;
// 그리고 앞으로 홀수짝수 구분은 & 1 로 하자
int solution(vector<int> arr)
{
	int answer = 0;
	vector<int> quess;

	Timer timer;
	while (true)
	{
		quess = arr;
		for (int i = 0; i < arr.size(); ++i)
		{
			if (arr[i] >= 50 && arr[i] % 2 == 0)
			{
				arr[i] /= 2;
			}
			else if (arr[i] < 50 && arr[i] % 2 != 0)
			{
				arr[i] = (arr[i] * 2) + 1;
			}
		}

		if (quess == arr)
			break;
		++answer;
	}

	timer.elapsed();
	return answer;
}

int main()
{
	std::cout << solution({ 1, 2, 3, 100, 99, 98 });	
}