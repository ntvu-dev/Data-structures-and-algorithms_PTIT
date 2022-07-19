#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int convert(string s) {
	int res=0;
	for(int i=0;i<s.length();i++) {
		res=res*10+s[i]-48;
	}
	return res;
}

void loading() {
	string a, b;
	cin >> a >> b;
	int min=0, max=0;
	for(int i=0;i<a.length();i++) {
		if(a[i]=='6') {
			a[i]='5';
		}
	}
	for(int i=0;i<b.length();i++) {
		if(b[i]=='6') {
			b[i]='5';
		}
	}
	cout << convert(a)+convert(b) << " ";
	for(int i=0;i<a.length();i++) {
		if(a[i]=='5') {
			a[i]='6';
		}
	}
	for(int i=0;i<b.length();i++) {
		if(b[i]=='5') {
			b[i]='6';
		}
	}
	cout << convert(a)+convert(b) << endl;
}

int main() {
	loading();
}

