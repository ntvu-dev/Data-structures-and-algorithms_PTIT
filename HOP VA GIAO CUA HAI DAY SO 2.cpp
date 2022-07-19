#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	int size=n+m;
	int hop[size], giao[size], c[n+m]={};
	for(int i=0;i<n;i++) {
		cin >> a[i];
		hop[i]=a[i];
	}
	for(int i=0;i<m;i++) {
		cin >> b[i];
		hop[i+n]=b[i];
	}
	sort(hop,hop+size);
	for(int i=1;i<size;i++) {
		for(int j=0;j<i;j++) {
			if(hop[i]==hop[j]) {
				for(int k=i;k<size;k++) {
					hop[k]=hop[k+1];
					size--;
					i--;
				}
			}
		}
	}
	for(int i=0;i<size;i++) {
		cout << hop[i] << " ";
	}
	cout << endl;
	int t=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(a[i]==b[j]) {
				c[t]= b[j];
				t++;
			}
		}
	}
	sort(c,c+t);
	for(int i=0;i<t;i++) {
		cout << c[i] << " ";
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

