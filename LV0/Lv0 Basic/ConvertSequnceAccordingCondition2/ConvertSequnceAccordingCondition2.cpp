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

// TODO: ���� �ð���� �Լ����� �ٵ� �̷��� �ð���°� �ƴ� �׳� �ñ��ϸ� �غ���
// �̰ɷ� �ð������� �ٸ���� �ڵ尡 �������� ���� ���� 
// �迭�� �����ϴ°Ϳ��� �߰��ð��� �߻��ϴµ� �迭�� ������ϰ� �� ������ ��� ������ ������;
// �׸��� ������ Ȧ��¦�� ������ & 1 �� ����
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