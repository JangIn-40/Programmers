#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) 
{
    int answer = 0;
    vector<bool> primeNumber(2998, true);

    primeNumber[0] = primeNumber[1] = false;
    for (int i = 2; i * i < 2998; ++i)
    {
        if (primeNumber[i])
        {
            for (int j = i * i; j < 2998; j += i)
            {
                primeNumber[j] = false;
            }
        }
    }
    
    for (int i = 0; i < nums.size() - 2; ++i)
    {
        for (int j = i + 1; j < nums.size() - 1; ++j)
        {
            for (int k = j + 1; k < nums.size(); ++k)
            {
                int key = nums[i] + nums[j] + nums[k];
                if (primeNumber[key])
                {
                    ++answer;
                }
            }
        }
    }

    return answer;
}

int main()
{
    cout << solution({ 1, 2, 3, 4 });
}