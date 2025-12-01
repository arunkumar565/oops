#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

bool isValid(const string &s) {
    unordered_map<char, char> match = { {')','('}, {'}','{'}, {']','['} };

    stack<char> st;

    for (char ch : s) {

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
           
            if (st.empty())
                return false;

            char item = st.top();
            st.pop();

            char expectedOpening = match[ch];

            if (item != expectedOpening) {
                return false;
            }
        }
    }

    return st.empty();  
}

int main() {
    string s = "{[()]})";

    if (isValid(s))
        cout << "Valid brackets \n";
    else
        cout << "Invalid brackets \n";

    return 0;
}
