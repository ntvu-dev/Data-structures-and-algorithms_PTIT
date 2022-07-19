#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void loading() {
	string s;
	cin >> s;
	int n=s.length();
	while(n--) {
		if(s[n]=='1') {
			s[n]='0';
			break;
		}
		else s[n]='1';
	}
	cout << s << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

