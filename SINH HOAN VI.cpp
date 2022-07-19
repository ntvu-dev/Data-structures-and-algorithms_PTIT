#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int n, a[15];

void print() {
	for(int i=1;i<=n;i++) {
		cout << a[i];
	}
	cout << " ";
}

void loading() {
	cin >> n;
	for(int i=1;i<=n;i++) {
		a[i]=i;
	}
	print();
	while(1) {
		int i=n, j=n;
		while(a[i]<a[i-1] && i>0) i--; i--;
		if(i==0) break;
		else {
			while(a[j] < a[i]) j--;
			swap(a[i],a[j]);
			sort(a+i+1,a+n+1);
			print();
		}
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

