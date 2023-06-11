#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
vector<int> v[N];
bool vis[N];

void dfs(int vertex)
{
    /// take action on vertex after entering the vertex

    vis[vertex]=true;
    cout<<vertex<<endl;

    for(int child: v[vertex])
    {
        if(vis[child]==true){
            continue;
        }

        ///take action on child before entering the child node
        else{
            dfs(child);

        ///take action on child after exiting the child node
        }
    }

    /// take action on vertex before exiting the vertex
}
int main()
{
    int n,e;

    cin>>n>>e;

    for(int i=1;i<=e;i++)
    {
        int v1,v2;

        cin>>v1>>v2;

        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    cout<<"dfs of.... " <<endl;
    dfs(1);
}


