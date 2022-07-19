#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int tich1=1, tich2=1, tich3=1;
	for(int i=0;i<3;i++) {
		tich1=tich1*a[i];
	}
	for(int i=n-2;i<n;i++) {
		tich2=tich2*a[i];
	}
	for(int i=n-3;i<n;i++) {
		tich3=tich3*a[i];
	}
	int tich=a[0]*a[1]*a[n-1];
	int max1=max(tich1,tich2);
	int max2=max(tich3,tich);
	cout << max(max1,max2) << endl;
}

