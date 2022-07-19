#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	priority_queue<int,vector<int>,greater<int> > pq;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
		pq.push(a[i]);
	}
	long long p, q, sum=0, sum1=0;
	while(pq.size()) {
		p=pq.top();
		pq.pop();
		q=pq.top();
		pq.pop();
		sum=p+q;
		sum1+=sum;
		if(pq.size()==0) {
			break;
		}
		pq.push(sum);
	}
	cout << sum1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

