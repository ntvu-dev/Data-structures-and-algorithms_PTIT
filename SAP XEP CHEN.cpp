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
	int n, min;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		int vitri=i, giatri=a[i];
		while(vitri>0 && a[vitri-1]>giatri) {
			a[vitri]=a[vitri-1];
			vitri--;
		}
		a[vitri]=giatri;
		cout << "Buoc " << i << ": ";
		exportarr(a,i+1);
		cout << endl;
	}
	cout << endl;
}

int main() {
	loading();
}

