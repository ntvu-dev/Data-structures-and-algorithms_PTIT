#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int n, a[1000];

void checkgeneration() {
	int l=1, r=n;
	while(l<r) {
		if(a[l]!=a[r]) {
			return;
		}
		l++;
		r--;
	}
	for(int i=1;i<=n;i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

void loadinggeneration(int i) {
	for(int j=0;j<=1;j++) {
		a[i]=j;
		if(i==n) {
			checkgeneration();
		}
		else loadinggeneration(i+1);
	}
}

int main() {
	cin >> n;
	loadinggeneration(1);
	return 0;
}

