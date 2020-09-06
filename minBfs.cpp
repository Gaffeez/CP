#include<bits/stdc++.h>
using namespace std;

int vis[100001];
int mod=100000;
int arr[]={3,4,65};

int n=sizeof(arr)/sizeof(arr[0]);

int minMul(int s,int e){
	
	//memset(vis,0,sizeof(vis));
	queue<pair<int,int>> q;
	q.push({s,0});
	
	vis[s]=1;

	int fl=-1;

	while(!q.empty()){
		auto it=q.front();//it pointing to pairs
		
		int cur=it.first;//first part of teh pair
		int steps=it.second;//second aprt of teh pair
		
		q.pop();
		
		if(cur==e){
			fl=steps;
			break;
		}
	
	for(int i=0;i<n;i++){
		int val=(cur*arr[i])%mod;
		if(!vis[val]){ 
			q.push({val,steps+1});
			vis[val]=1;
		}

	}
}
	return fl;

}
int main(){
	#ifndef ONLINE_JUDGE
	//input from input.txt
	freopen("input.txt","r",stdin);
	//input from output.txt
	freopen("output.txt","w",stdout);
	#endif

	int start,end;
	cin>>start>>end;
	/*n=3;
	int arr[n]={3,4,65};*/
	//for(int i=0;i<n;i++) cin>>arr[i];
	
	cout<<"answer :"<<minMul(start,end);

}