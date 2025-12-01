#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};

    
    unordered_map<string, vector<string>> groups;

    for (string w : words) {
        string key = w; 
        sort(key.begin(), key.end()); 
        groups[key].push_back(w);
    }

    cout << "Grouped Anagrams:\n";
    for (auto &g : groups) {
        for (auto &word : g.second) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}