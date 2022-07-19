#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

void loading() {
	int n, x;
	cin >> n;
	queue<int> q;
	string s;
	while(n--) {
		cin >> s;
		if(s=="PUSH") {
			cin >> x;
			q.push(x);
		}
		else if(s=="POP") {
			if(!q.empty()) {
				q.pop();
			}
		}
		else {
			if(q.empty()) {
				cout << "NONE" << endl;
			}
			if(!q.empty()) {
				cout << q.front() << endl;
			}
	    } 
	}
	cout << endl;
}

int main() {
	int t=1;
	while(t--) {
		loading();	
	}
	return 0;
}

