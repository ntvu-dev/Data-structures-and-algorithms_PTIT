#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	int left=0, right=n-1;
	while(left<right) {
		cout << a[left] << " " << a[right] << " ";
		left++;
		right--;
	}
	if(left==right) {
		cout << a[left];
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

