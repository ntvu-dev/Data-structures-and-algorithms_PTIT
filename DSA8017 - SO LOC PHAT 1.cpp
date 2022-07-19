#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

void loading() {
	int n;
	cin >> n;
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> res;
	while(q.front().size() <= n) {
		string top=q.front();
		res.push_back(top);
		q.pop();
		q.push(top+"6");
		q.push(top+"8");
	}
	for(int i=res.size()-1;i>=0;i--) {
		cout << res[i] << " ";
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

