#include <string>
#include <vector>

using namespace std;

// TODO: 반드시 숙지하고 넘어갈것 투포인터 방식
vector<int> solution(vector<int> sequence, int k) {
    int left = 0, right = 0, sum = sequence[0], n = sequence.size();
    vector<int> answer = { 0, n };

    while (left <= right && right < n) 
    {
        if (sum < k) 
        {
            right++;
            if (right < n)
            {
                sum += sequence[right];
            }
        }
        else if (sum > k) 
        {
            sum -= sequence[left];
            left++;
        }
        else 
        {
            if (right - left < answer[1] - answer[0]) 
            {
                answer = { left, right };
            }
            sum -= sequence[left];
            left++;
        }
    }

    return answer;
}

int main()
{
    solution({ 1, 2, 3, 4, 5 }, 7);
}