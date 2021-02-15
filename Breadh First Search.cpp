#include<iostream>
using namespace std;
int adj[20][20],queue[20]={0},visited[20]={0};
int i,j,n,front=0,rear=-1;
void BFS(int S)
{
    for(i=0;i<n;i++)
    {
        if(adj[S][i] == 1 && visited[i] == 0)
        {
            queue[++rear]=i;
        }
    }
    if(front<=rear)
    {
        visited[queue[front]]=1;
        BFS(queue[front++]);
    }
}
int main()
{
    int s;
    cout<<"Enter Total Vartex Number: ";
    cin>>n;
    cout<<"Enter Graph Data to Adjacency Matrix:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>adj[i][j];
        }
    }
    cout<<"Enter Starting Vertex:";
    cin>>s;
    BFS(s);
    cout<<"Visited Vertices:"<<endl;
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            cout<<i<<endl;
            //cout<<visited[i]<<endl;
        }
        else
            cout<<"Missed Vertex!"<<endl;
    }
}
