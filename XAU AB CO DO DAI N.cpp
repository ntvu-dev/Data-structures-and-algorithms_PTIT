#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int n;
string s;

void print() {
	for(int i=0;i<n;i++) {
		cout << s[i];
	}
	cout << " ";
}

bool check() {
	for(int i=0;i<n;i++) {
		if(s[i]=='A') return 0;
	}
	return 1;
}

void loading() {
	cin >> n;
	for(int i=0;i<n;i++) {
		s[i]='A';
	}
	for(int i=0;i<n;i++) {
		cout << s[i];
	}
	cout << " ";
	while(check()==0) {
		int j=n;
		while(j-- && s[j]=='B') s[j]='A';
		if(j>=0) s[j]='B';
		print();
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

