#include<iostream>
#include"AttributedGraph1.h"
#include"AttributedNode1.h"
#include"AttributedGraph1.cpp"
#include"AttributedNode1.cpp"

#include"AttributedGraph2.h"
#include"AttributedNode2.h"
#include"AttributedGraph2.cpp"
#include"AttributedNode2.cpp"

using namespace std;
int main()
{
    AttributedGraph2 graph;

    int total_number_of_Nodes, id, num_of_neighbours, neighbour1, neighbour2;

    cout<<"How Many Nodes you want to add: "<<endl;
    cin>>total_number_of_Nodes;

    for(int i=0; i<total_number_of_Nodes; i++){
        cout<<"Enter the ID of Node "<<i+1<<": "<<endl;
        cin>>id;
        graph.addNode(id);
        graph.appendAttributes(id);
    }

    cout<<"How many Neigbours you want to add: "<<endl;
    cin>>num_of_neighbours;

    for (int i=0; i<num_of_neighbours; i++){
        cout<<"\nSet "<<i+1<<" of Neigbours: "<<endl;
        cout<<"Enter ID of Neighbour 1: "<<endl;
        cin>> neighbour1;
        cout<<"Enter ID of Neigbour 2: "<<endl;
        cin>> neighbour2;
        graph.addEdge(neighbour1, neighbour2);
    }
    
    graph.printData();
    return 0;
}