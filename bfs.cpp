#include<bits/stdc++.h>
#define v vector<vector<node>>
#define p push
using namespace::std;
struct node{
	int b, cost;
};
void insert(v &adj, int a, int b, int cst){
	struct node n = {b, cst};
	adj[a].push_back(n);
}
void bfs(v adj, int vert, int st){
	vector<bool> vis(vert+1, false);
	queue<int> q;
	q.p(st);
	cout<<st<<" ";
	vis[1]=true;
	while(!q.empty()){
		int dest = q.front();
		q.pop();
		for(int i = 0; i < adj[dest].size(); i++){
			node temp = adj[dest][i];
			int b1 = temp.b;
			if(!vis[b1]){
				vis[b1] = true;
				q.p(b1);
				cout<<b1<<" ";
			}
		}
	}
}
int main(){
	int ver = 5;
	v adj(ver+1);
	insert(adj, 1, 3, 2);
	insert(adj, 3, 1, 2);
	insert(adj, 1, 2, 3);
	insert(adj, 2, 1, 3);
	insert(adj, 2, 4, 1);
	insert(adj, 4, 2, 1);
	insert(adj, 4, 3, 1);
	insert(adj, 3, 4, 1);
	insert(adj, 4, 4, 1);
	insert(adj, 5, 4, 1);
	insert(adj, 5, 3, 10);
	insert(adj, 3, 5, 10);

	bfs(adj, ver, 1);
	cout<<endl;
	return 0;
}
