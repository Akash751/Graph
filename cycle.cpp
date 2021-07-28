//This code is for only cheking cycle in Directed graph
#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int> adj[],vector<bool> visited,int curr)
{
    if(visited[curr]==true)
    return true;
    bool flag = false;
    visited[curr]=true;
    for(int i=0;i<adj[curr].size();i++)
    {
        flag = solve(adj,visited,adj[curr][i]);
        if(flag==true);
        return true;
    }
    return false;
}
bool isCycle(vector<int> adj[], int n)
{
    vector<bool> visited(n+1,false);
    bool flag = false;
    for(int i=0;i<n;i++)
    {   
        visited[i] = true;
        for(int j=0;j<adj[i].size();j++)
        {
            flag = solve(adj,visited,adj[i][j]);
            if(flag==true)
            return true;

        }
        visited[i] = false;
        return false;


    }
}
int main()
{
    int t;
    cout<<"Enter Testcases"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter Nodes and Edeges"<<endl;
        int n,e;
        cin>>n>>e;
        vector<int> adj[e];
        cout<<"Enter two connected elements/Directed Graph"<<endl;
        for(int i=0;i<e;i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
           // adj[y].push_back(x);

        }
   
    cout<<isCycle(adj,n)<<endl;


    }
    return 0;
}