#include<bits/stdc++.h>
#include<stack>
#include<string>

using namespace std;

void loading(string s) {
	stack<string> stk;
	for (int i = s.size()-1; i >= 0; i--) {
		if (s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '%') {
			string fi = stk.top(); stk.pop();
			string se = stk.top(); stk.pop();
			string tmp = "(" + fi + s[i] + se + ")";
			stk.push(tmp);
		}
		else {
			stk.push(string(1, s[i]));
		}
	}
	cout << stk.top();
	cout << endl;	
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cin >> s;
		loading(s);
	}
}
