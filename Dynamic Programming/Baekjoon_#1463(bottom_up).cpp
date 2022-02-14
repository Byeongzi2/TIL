#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000001
int N;
int dp[MAXN];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>N;
	
	for(int i=1;i<N;i++) {
		dp[i+1] = dp[i]+1;
		if(i*2<=N) dp[i*2] = dp[i]+1;
		if(i*3<=N) dp[i*3] = dp[i]+1;
	}
	cout<<dp[N];
	return 0;
}
