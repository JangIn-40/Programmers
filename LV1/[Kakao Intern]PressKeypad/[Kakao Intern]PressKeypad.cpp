#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<int> numbers, string hand) 
{
    string answer = "";
    bool isRightHand = hand == "right" ? true : false;
    unordered_map<int, char> keypad{ {1, 'L'}, {4, 'L'}, {7, 'L'}, {3, 'R'}, {6, 'R'}, {9, 'R'} };
    int leftHand{ 10 }, rightHand{ 12 };

    for (int& num : numbers)
    {
        auto it = keypad.find(num);
        if (it != keypad.end())
        {
            answer += it->second;
            it->second == 'R' ? rightHand = it->first : leftHand = it->first;
        }
        else
        {
            if (num == 0)
            {
                num = 11;
            }

            int distanceRight = abs(num - rightHand) / 3 + abs(num - rightHand) % 3;
            int distanceLeft = abs(num - leftHand) / 3 + abs(num - leftHand) % 3;

            if (distanceRight > distanceLeft)
            {
                answer += 'L';
                leftHand = num;
            }
            else if (distanceRight < distanceLeft)
            {
                answer += 'R';
                rightHand = num;
            }
            else
            {
                if (isRightHand)
                {
                    answer += 'R';
                    rightHand = num;
                }
                else
                {
                    answer += 'L';
                    leftHand = num;
                }
            }
        }
    }

    return answer;
}

int main()
{
    solution({ 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 }, "right");
}