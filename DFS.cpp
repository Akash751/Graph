//Code will be same as the undirected graph of Directed graph but 
//there will be a little change during set the elemnts and it enough
//changed v[x],push_back(y) only not both element may be directed, done!
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void solve(bool visited[], vector<int> v[],int st)
{
     visited[st] = true;
     cout<<st<<" ";
     for(auto x : v[st])
     {
         if(visited[x]==false)
         {
             solve(visited,v,x);
         }
     }
}
void DFS(int st,vector<int> v[], int n)
{
    bool visited[n+1] = {false};
    solve(visited,v,st);
    cout<<endl<<endl;

}
int main()
{
    int t;
    cout<<"Enter Testcases for check"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter Nodes and Edeges"<<endl;
        int n,e;
        cin>>n>>e;
        vector<int> v[e];
        cout<<"Enter two connected elements/Undirected Graph"<<endl;
        for(int i=1;i<=e;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);

        }
    /*cout<<"Adjacency Of List UnDirected Graph Representation...."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i;
        for (auto x : v[i])
           cout << "-> " << x;
           cout<<endl;
    }*/

    cout<<"Which element you want to start from the graph/Please Enter"<<endl;
    int w;
    cin>>w;
    DFS(w,v,n);


    }
    return 0;
}