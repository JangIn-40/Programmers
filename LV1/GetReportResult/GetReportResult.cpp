#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

// TODO: 다른사람 풀이에 더 효율적인 코드가 있음
vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    vector<int> answer;
    stringstream s;
    unordered_map<string, unordered_map<string, int>> um;
    unordered_map<string, int> reportCount;
    unordered_map<string, int> getMail;
    string reporter, lawbreaker;

    for (const string& str : report)
    {
        while (s << str)
        {
            s >> reporter >> lawbreaker;
        }
        s.clear();
        ++um[reporter][lawbreaker];
    }

    for (const auto& pair : um)
    {
        for (const auto& ppair : pair.second)
        {
            if (ppair.second >= 1)
            {
                ++reportCount[ppair.first];
            }
        }
    }

    for (const auto& pair : um)
    {
        for (const auto& ppair : pair.second)
        {
            if (reportCount[ppair.first] >= k)
            {
                ++getMail[pair.first];
            }
        }
    }

    for (const string& str : id_list)
    {
        answer.emplace_back(getMail[str]);
    }

    return answer;
}

/*
vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    // 1.
    const int n = id_list.size();
    map<string, int> Conv;
    for (int i = 0; i < n; i++) Conv[id_list[i]] = i;

    // 2.
    vector<pair<int, int>> v;
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    for (const auto& s : report) {
        stringstream in(s);
        string a, b; in >> a >> b;
        v.push_back({ Conv[a], Conv[b] });
    }

    // 3.
    vector<int> cnt(n), ret(n);
    for (const auto& [a, b] : v) cnt[b]++;
    for (const auto& [a, b] : v) if (cnt[b] >= k) ret[a]++;
    return ret;
}
*/