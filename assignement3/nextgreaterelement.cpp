#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<int, int> nextGreaterElement(vector<int> nums) {

    unordered_map<int, int> result;  // stores element 
    stack<int> st;                   // stack stores elements

 
    for (int i = 0; i < nums.size(); i++) {

        while (!st.empty() && nums[i] > st.top()) {
            int topElement = st.top();      // take the top element
            st.pop();                       // remove from stack
            result[topElement] = nums[i];   // current element is next greater
        }

       
        st.push(nums[i]);
    }

    
    while (!st.empty()) {
        int topElement = st.top();
        st.pop();
        result[topElement] = -1;         
    }

    return result;
}

int main() {

    vector<int> nums = {4, 5, 2, 25,34,56,67};

    unordered_map<int, int> ans = nextGreaterElement(nums);

    cout << "Next Greater Elements:\n";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " -> " << ans[nums[i]] << endl;
    }

    return 0;
}
