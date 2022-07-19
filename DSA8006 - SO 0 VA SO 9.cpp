#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

vector<long long> res;

long long ans[101];

long long convert(string s) {
	int l=s.length();
	long long a[l], sum=0;
	for(int i=0;i<l;i++) {
		sum=sum*10+(s[i]-'0');
	}
	return sum;
}

void loading() {
	queue<string> q;
	q.push("9");
	res.push_back(9);
	while(res.size() < 10001) {
		string top=q.front();
		q.pop();
		if(top.length() == 10) break;
		res.push_back(convert(top + "0"));
		res.push_back(convert(top + "9"));
		q.push(top+"0");
		q.push(top+"9");
	}
	for(int i=1;i<=100;i++) {
		for(long long x=0;x<=res.size();x++) {
			if(res[x]%i==0) {
				ans[i]=res[x];
				break;
			}
		}
	}
}

int main() {
	loading();
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << ans[n] << endl;
	}
	return 0;
}

