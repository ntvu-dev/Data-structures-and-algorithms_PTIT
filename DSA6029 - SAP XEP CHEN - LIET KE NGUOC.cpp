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
	for(int i=0;i<n;i++) {
		int value=a[i], j=i-1;
		while(j>=0 && a[j] > value) {
			swap(a[j+1], a[j]);
			j--;
		}
		vector<int> tmp(a.begin(), a.begin()+i+1);
		b.push_back(tmp);
	}
	for(int i=b.size()-1;i>=0;i--) {
		cout << "Buoc " << i << ": ";
		for(int j=0;j<b[i].size();j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	loading();
	return 0;
}

