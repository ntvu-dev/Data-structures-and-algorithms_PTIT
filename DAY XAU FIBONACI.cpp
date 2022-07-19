#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

long long n, i, f[93];

char fibonaci(long long n, long long i) {
	if(i==1) {
		return 'A';
	}
	if(i==2) {
		return 'B';
	}
	if(i<=f[n-2]) {
		return fibonaci(n-2,i);
	}
	else {
		return fibonaci(n-1,i-f[n-2]);
	}
}

void loading() {
	cin >> n >> i;
	cout << fibonaci(n,i) << endl;
}

int main() {
	int t;
	cin >> t;
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=92;i++) {
		f[i]=f[i-1]+f[i-2];
	}
	while(t--) {
		loading();
	}
}

