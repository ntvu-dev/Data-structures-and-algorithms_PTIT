#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int n, k, a[100], OK;

void khoitao() {
	for(int i=1;i<=k;i++) {
		a[i]=i;
	}
}

void gene() {
	int i=k;
	while(i>=1 && a[i]==n-k+i) {
	    --i; 	
	}
	if(i==0) {
		OK=0;
	}
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++) {
			a[j]=a[j-1]+1;
		}
	}
}

int main() {
	cin >> n >> k;
	OK=1;
	khoitao();
	while(OK) {
		for(int i=1;i<=k;i++) {
			cout << a[i];
		}
		cout << endl;
		gene();
	}
	return 0;
}

