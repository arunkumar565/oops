#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>> &intervals) {

    if (intervals.empty())
        return {};

    sort(intervals.begin(), intervals.end());
    vector<pair<int, int>> merged;

    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {

        pair<int, int> &last = merged.back();
        int start = intervals[i].first;
        int end   = intervals[i].second;

        if (start <= last.second) 
            last.second = max(last.second, end);
        else 
            merged.push_back({start, end});
    }

    return merged;
}

int main() {

    vector<pair<int, int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<pair<int, int>> result = mergeIntervals(intervals);

    for (int i = 0; i < result.size(); i++)
        cout << "[" << result[i].first << "," << result[i].second << "] ";
}

