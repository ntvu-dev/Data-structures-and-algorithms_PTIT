#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int n, a[1001];

bool cmp(pair<int, int> a, pair<int, int> b) {
	if(a.second > b.second) {
		return 1;
	}
	if(a.second == b.second && a.first < b.first) {
		return 1;
	}
	return 0;
}

void loading() {
	cin >> n;
	int a[n];
	map<int, int> m;
	vector<pair<int, int> > p;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	for(int i=0;i<n;i++) {
		p.push_back(make_pair(a[i], m[a[i]]));
	}
	sort(p.begin(), p.end(), cmp);
	for(int i=0;i<p.size();i++) {
		cout << p[i].first << " ";
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


