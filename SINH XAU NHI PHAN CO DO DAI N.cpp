#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

/* Thuat toan sinh:
- cau hinh dau tien
-cau hinh cuoi
-phuong phap sinh 

Khoi tao cau hinh dau tien
while(khi chua phai la cau hinh cuoi cung) {
    in ra cau hinh hien tai;
    sinh cau hinh tiep theo;
*/

//sinh xau nhi phan: xet tu bit cuoi cung, neu 1 thi chuyen thanh 0
//gap 0 thi dung lai 
//truoc 0 thi giu nguyen

using namespace std;

int n, a[100], OK;

void khoitao() {
	for(int i=1;i<=n;i++) {
		a[i]=0;
	}
}

void generation() {
	int i=n;
	while(i>=1 && a[i]==1) {
		a[i]=0;
		--i;
	}
	if(i==0) {
		OK=0; //cau hinh cuoi 
	}
	else a[i]=1;
}

int main() {
	cin >> n;
	OK=1;
	khoitao();
	while(OK==1) {
		for(int i=1;i<=n;i++) {
			cout << a[i];
		}
		cout << endl;
		generation();
	}
	return 0;
}

