#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

long long convert(string s) {
	long long res=0;
	for(int i=0;i<s.length();i++) {
		res=res*2+s[i]-'0';
	}
	return res;
}

void loading() {
	string a, b;
	cin >> a >> b;
	cout << convert(a)*convert(b) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

