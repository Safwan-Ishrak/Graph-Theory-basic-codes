#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=1e6;
vector<ll> g[N];
bool vis[N];
ll level[N];

void bfs(ll source)
{
    queue<ll> q;
    q.push(source);
    vis[source]=true;
    level[source]=1;
    while(!q.empty())
    {
        ll curr_v=q.front();
        q.pop();
        cout<<curr_v<<endl;
        for(ll child: g[curr_v]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
                level[child]=level[curr_v]+1;
            }
        }
    }

}
int main()
{
    ll n,m;

    cin>>n>>m;

    for(ll i=0;i<m;i++){
        ll a,b;

        cin>>a>>b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(1);

    for(ll i=1;i<=n;i++){
        cout<<i<<" "<<level[i]<<endl;
    }

}
/*
13
12
1
2
1
3
1
13
2
5
5
6
5
7
5
8
8
12
3
4
4
9
4
10
10
11
*/
