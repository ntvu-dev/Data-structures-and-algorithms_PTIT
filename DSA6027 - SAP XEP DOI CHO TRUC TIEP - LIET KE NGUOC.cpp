#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

void loading() {
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<vector<int> > b;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) swap(a[i], a[j]);
		}
		b.push_back(a);
	}
	for(int i=b.size()-1;i>=0;i--) {
		cout << "Buoc " << i+1 << ": ";
		for(int j=0;j<n;j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

