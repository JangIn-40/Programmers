#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> numlist, int n)
{
    vector<int> answer;

    sort(numlist.begin(), numlist.end(), [&n](int a, int b) {
        int distanceA = abs(n - a);
        int distanceB = abs(n - b);
        if (distanceA == distanceB)
        {
            return a > b;
        }
        return distanceA < distanceB;
    });

    answer = numlist;
    return answer;
}

int main()
{
    solution({ 10000,20,36,47,40,6,10,7000 }, 30);

}