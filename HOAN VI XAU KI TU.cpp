#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int check[11];
string s, x[11];

void print() {
	for(int i=0;i<s.length();i++) {
		cout << x[i];
	}
	cout << " ";
}

void loading(int i) {
	for(int j=0;j<s.length();j++) {
		if(check[j]==0) {
			x[i]=s[j];
			check[j]=1;
			if(i==s.length()-1) {
				print();
			}
			else loading(i+1);
			check[j]=0;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		loading(0);
		cout << endl;
	}
	return 0;
}

