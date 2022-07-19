#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

bool boolge(char x) {
	if(x=='+' || x=='-' || x=='*' || x=='/') {
		return 1;
	}
	return 0;
}

void loading() {
	string str;
	cin >> str;
	stack<string> s;
	for(int i=0;i<str.length();i++) {
		if(boolge(str[i]==0)) {
			s.push(string(1,str[i]));
		}
		else {
			string str1=s.top();
			s.pop();
			string str2=s.top();
			s.pop();
			string temp=str[i]+str2+str1;
			s.push(temp);
		}
	}
	cout << s.top() << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		loading();
	}
}

