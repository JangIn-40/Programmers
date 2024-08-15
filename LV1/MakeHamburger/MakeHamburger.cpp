#include <string>
#include <vector>
#include <stack>
using namespace std;

// TODO: 시간복잡도는 똑같으나 더 간단한 코드도 있음
void MakeHamburger(stack<int> & stackHamburger, int& answer)
{
    if (stackHamburger.top() == 1)
    {
        int bread = stackHamburger.top();
        stackHamburger.pop();
        if (stackHamburger.top() == 3)
        {
            int meat = stackHamburger.top();
            stackHamburger.pop();
            if (stackHamburger.top() == 2)
            {
                int vegetable = stackHamburger.top();
                stackHamburger.pop();
                if (stackHamburger.top() == 1)
                {
                    stackHamburger.pop();
                    ++answer;
                }
                else
                {
                    stackHamburger.push(vegetable);
                    stackHamburger.push(meat);
                    stackHamburger.push(bread);
                }
            }
            else
            {
                stackHamburger.push(meat);
                stackHamburger.push(bread);
            }
        }
        else
        {
            stackHamburger.push(bread);
        }
    }
}


int solution(vector<int> ingredient)
{
	int answer = 0;
	stack<int> stackHamburger;
	stackHamburger.push(0);

	for (const int &num : ingredient)
	{
        stackHamburger.push(num);
        MakeHamburger(stackHamburger, answer);
	}

	return answer;
}

int main()
{
	solution({ 2, 1, 1, 2, 3, 1, 2, 3, 1 });
}