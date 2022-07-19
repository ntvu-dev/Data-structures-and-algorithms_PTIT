#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int n;

vector<int> A(11);
vector<vector<int> >res;

void loading() {
	cin >> n;
	A.resize(n);
	res.clear();
	for(int i=0;i<A.size();i++) {
		cin >> A[i];
	}
	res.push_back(A);
	while(A.size() > 1) {
		for(int i=0;i<A.size()-1;i++) {
			A[i]=A[i]+A[i+1];
		}
		A.pop_back();
		res.push_back(A);
	}
	for(int i=res.size()-1;i>=0;i--) {
		cout << "[";
		for(int j=0;j<res[i].size()-1;j++) {
			cout << res[i][j] << " "; 
		}
		cout << res[i].back() << "]" << " ";
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

