#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

void loading() {
	int n, x, y;
	cin >> n;
	queue<int> q;
	while(n--) {
		cin >> x;
		if(x==1) {
			cout << q.size() << endl;
		}
		else if(x==2) {
			if(q.empty()) {
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
    	}
    	else if(x==3) {
    		cin >> y;
    		q.push(y);
		}
		else if(x==4) {
			if(!q.empty()) {
				q.pop();
			}
		}
		else if(x==5) {
			if(!q.empty()) cout << q.front() << endl;
			else cout << -1 << endl;
		}
		else {
			if(!q.empty()) cout << q.back() << endl;
			else cout << -1 << endl;
		}
	}
	cout << endl;
}

int main() {
	int t=1;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

