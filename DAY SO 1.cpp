#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int n;

vector<int> A(11);

void out() {
	cout << "[";
	for(int i=0;i<A.size()-1;i++) {
		cout << A[i] << " ";
	}
	cout << A[A.size()-1] << "]" << endl;
}
void loading() {
	cin >> n;
	A.resize(n);
	for(int i=0;i<A.size();i++) {
		cin >> A[i];
	}
	out();
	while(A.size()>1) {
		for(int i=0;i<A.size()-1;i++) {
			A[i]=A[i]+A[i+1];
		}
		A.pop_back();
		out();
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

