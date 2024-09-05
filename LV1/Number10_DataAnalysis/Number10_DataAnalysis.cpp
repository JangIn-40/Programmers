#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) 
{
    vector<vector<int>> answer;
    unordered_map<string, int> order{ {"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3} };
    int index = order[ext];
    
    for (int i = 0; i < data.size(); ++i)
    {
        if (data[i][index] < val_ext)
        {
            answer.push_back(data[i]);
        }
    }

    index = order[sort_by];
    sort(answer.begin(), answer.end(), [&index](vector<int>& a, vector<int>& b) {
        return a[index] < b[index];
    });

    return answer;
}