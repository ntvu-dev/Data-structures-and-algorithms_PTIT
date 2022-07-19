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
		int min=i;
		for(int j=i+1;j<n;j++) {
			if(a[j]<a[min]) {
				min=j;
			}
		}
		if(min!=i) {
			swap(a[i], a[min]);
		}
		b.push_back(a);
	}
	for(int i=b.size()-2;i>=0;i--) {
		cout << "Buoc " << i+1 << ": ";
		for(int j=0;j<n;j++) {
			cout << b[i][j] << " ";
		} 
		cout << endl;
	}
}

int main() {
	loading();
	return 0;
}

