#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void loading() {
	string s;
	cin >> s;
	int i=s.length();
	while(i-- && s[i]=='1') s[i]='0';
	if(i>=0) s[i]='1';
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

