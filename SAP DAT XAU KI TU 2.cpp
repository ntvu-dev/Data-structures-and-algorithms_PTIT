#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, f[100];
	string s;
	cin >> n;
	cin.ignore();
	cin >> s;
	memset(f,0,sizeof(f));
	for(int i=0;i<s.length();i++) {
		f[s[i]-'A']++;
	}
	sort(f,f+100,greater<int>());
	if((f[0]-1)*n+1<=s.length()) {
		cout << 1 << endl;
	}
	else {
		cout << -1 << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

