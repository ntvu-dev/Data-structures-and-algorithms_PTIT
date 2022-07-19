#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n;

struct Tree{
	int value;
	Tree *left, *right;
};

Tree *newNode(int val) {
	Tree *temp=new Tree;
	temp->left=temp->right=NULL;
	temp->value=val;
	return temp;
}

Tree *buildTree() {
	map<int,Tree*> mp;
	Tree *root=NULL;
	while(n--) {
		int a, b;
		char x;
		cin >> a >> b >> x;
		Tree *cha=newNode(a);
		if(mp.find(a)==mp.end()) {
			mp[a]=cha;
			if(root==NULL) root=cha;
		}
		else {
			cha=mp[a];
		}
		Tree *con=newNode(b);
		if(x=='L') cha->left=con;
		else if(x=='R') cha->right=con;
		mp[b]=con;
	}
	return root;
}

void leverOrder(Tree *root) {
	if(root==NULL) return;
	deque<Tree *> dq;
	dq.push_front(root);
	bool flag=false;
	while(!dq.empty()) {
		int dsize=dq.size();
		if(flag) {
			while(dsize--) {
				Tree*t=dq.front();
				dq.pop_front();
				cout << t->value << " ";
				if(t->left!=NULL) dq.push_back(t->left);
				if(t->right!=NULL) dq.push_back(t->right);
			}
		}
		else {
			while(dsize--) {
				Tree*t=dq.back();
				dq.pop_back();
				cout << t->value << " ";
				if(t->right!=NULL) dq.push_front(t->left);
			}
		}
		flag=!flag;
	}
}

void loading() {
	cin >> n;
	Tree*root=buildTree();
	leverOrder(root);
	cout << endl;
}

int main() {
	int t;
    cin >> t;
    while(t--) {
    	loading();
	}
}

