#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int loading(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ')') {
            if (st.empty() == 0 && st.top() == '(') {
                st.pop();
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    int count = 0;
    int size = st.size();
    while (st.empty() == 0 && st.top() == '(') {
        st.pop();
        count++;
    }
    return (size/2) + (count%2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << loading(s) << endl;
    }
}


