//Adjacency Matrix of undirected graph
#include<iostream>
#include<vector>
using namespace std;
int v[10][10];
void initialization()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            v[i][j] = 0;
        }
    }   
}
void display()
{
    //cout<<"Intially elements are : "<<endl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void set(int e)
{
    for(int i=0;i<=e;i++)
    {
        v[0][i] = i;
        v[i][0] = i;
    }
    int x,y;
    cout<<"Enter pairs of element wich are connected"<<endl;

    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        v[x][y] = 1;
        v[y][x] = 1;
    }
}
void cheking()
{
    if(v[1][2]==1)
    cout<<"Connected :"<<1<<" from "<<2<<endl;
    else
     cout<<"Not Connected"<<endl;

     if(v[1][3]==1)
    cout<<"Connected :"<<1<<" from "<<2<<endl;
    else
     cout<<"Not Connected :"<<1<<" from "<<3<<endl;
}
int main()
{
   cout<<"Enter No. of Nodes and edeges"<<endl;
   int n,e;
   cin>>n>>e;
  initialization();
  set(e);
  display();
  cheking();
    return 0;
}