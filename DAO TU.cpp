#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading(stack<string> s) {
	while(s.size()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	string str;
	cin.ignore();
	while(t--) {
		stack<string> s;
		while(1) {
			cin >> str;
			s.push(str);
			if(getchar()=='\n') {
				break;
			}
		}
		loading(s);
	}
}

