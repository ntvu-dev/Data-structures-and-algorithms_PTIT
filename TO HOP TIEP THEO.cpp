#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, k, a[45], b[45], c[45];

void loading() {
	cin >> n >> k;
	for(int i=1;i<=k;i++) {
		cin >> a[i];
		b[i]=a[i];
	}
	int i=k, count=0;
	while(i>0 && a[i]==n-k+i) {
		i--;
	}
	if(i==0) {
		cout << k << endl;
	}
	else {
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++) {
			a[j]=a[i]+j-i;
		}
		for(int i=0;i<=k;i++) {
		c[i]=a[i];
	    }
	    for(int i=1;i<=k;i++) {
		   for(int j=1;j<=k;j++) {
			   if(b[i]==c[j]) count++;
		    }
	    }
	    cout << k-count << endl;	
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

