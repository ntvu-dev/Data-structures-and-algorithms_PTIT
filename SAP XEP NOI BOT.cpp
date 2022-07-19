#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void exportarr(int a[], int n) {
	for(int i=0;i<n;i++) {
		cout << a[i] << " ";
	}
}

void loading() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	bool OK=false;
	int i, j;
	for(i=0;i<n-1;i++) {
		OK=false;
		for(j=0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
				swap(a[j],a[j+1]);
				OK=true;
			}
		}
		if(OK==false) break;
		cout << "Buoc " << i+1 << ": ";
		for(int i=0;i<n;i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	loading();
}

