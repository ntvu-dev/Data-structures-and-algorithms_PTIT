#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int n, a[15], check=0;

void print() {
	for(int i=1;i<=n;i++) {
		cout << a[i];
	}
	cout << " ";
}

void generation() {
	int i=n-1;
	while(a[i]<a[i+1] && i>=1) i--;
	if(i==0) check=1;
	else {
		int j=n;
		while(a[i]<a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1, r=n;
		while(l<=r) {
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
}

void loading() {
	cin >> n;
	check=0;
	for(int i=1;i<=n;i++) {
		a[i]=n-i+1;
	}
	while(check==0) {
		print();
		generation();
	}
	cout << endl;
}

int main() {
	int t=1;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

