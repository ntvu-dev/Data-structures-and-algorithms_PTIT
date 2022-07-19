#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, m;
	cin >> n >> m;
	int size=n+m;
	int a[n], b[m], arr1[n+m], arr2[n+m];
	for(int i=0;i<n+m;i++) {
		arr1[i]=0;
		arr2[i]=0;
	}
	for(int i=0;i<n;i++) {
		cin >> a[i];
		arr1[a[i]]=1;
	}
	for(int i=0;i<m;i++) {
		cin >> b[i];
		arr2[b[i]]=1;
	}
	for(int i=0;i<n+m;i++) {
		if(arr1[i]==1 || arr2[i]==1) {
			cout << i << " ";
		}
	}
	cout << endl;
	for(int i=0;i<n+m;i++) {
		if(arr1[i]==1 && arr2[i]==1) {
			cout << i << " ";
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
}

