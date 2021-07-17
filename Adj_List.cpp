//Adjacency List of undirected graph
#include<iostream>
#include<vector>
using namespace std;
vector<int> v[10];
void display(int n)
{
    
    cout<<"Adjacency Of List Directed Graph Representation...."<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i;
        for(int j=0;j<v[i].size();j++)
        {
             cout << "-> " << v[i][j];
        }
        cout<<endl;
    }
}

void display1(int n1)
{
    
    cout<<"Adjacency Of List UnDirected Graph Representation...."<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<i;
        for (auto x : v[i])
           cout << "-> " << x;
        cout<<endl;
    }
}
void set(int e)
{
    int x,y;
    cout<<"Enter pairs of element wich are connected/Directed"<<endl;

    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
       v[x].push_back(y);
    }
}

void set1(int e1)
{
    int x,y;
    cout<<"Enter pairs of element wich are connected"<<endl;

    for(int i=0;i<e1;i++)
    {
        cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
    }
}

int main()
{   int opt;
    int t;
    cout<<"Enter Testcases"<<endl;
    cin>>t;
    while(t--)
    {
    do
    {
        cout<<"Click ->1 for Undirected Graph"<<endl;
        cout<<"Click ->2 for Directed Graph"<<endl;
        cin>>opt;
        switch (opt)
        {
        case 1:
         cout<<"Enter No. of Nodes and edeges"<<endl;
            int n1,e1;
            cin>>n1>>e1;
            set1(e1);
            display1(n1);
        break;
        case 2:
         cout<<"Enter No. of Nodes and edeges"<<endl;
            int n,e;
            cin>>n>>e;
            set(e);
            display(n);
        break;
        
        default:
            break;
        }
        if(opt>2)
         cout<<"Invalid Input"<<endl<<endl;
    } while (opt<3);
    }
    
    return 0;
}