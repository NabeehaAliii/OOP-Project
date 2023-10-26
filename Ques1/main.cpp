#include <iostream>
#include"SimpleGraph.h"
#include"SimpleNode.h"
#include"SimpleGraph.cpp"
#include"SimpleNode.cpp"

using namespace std;
int main() {
    SimpleGraph graph;

    int total_number_of_Nodes, id, num_of_neighbours, neighbour1, neighbour2;

    cout<<"How Many Nodes you want to add: "<<endl;
    cin>>total_number_of_Nodes;

    for(int i=0; i<total_number_of_Nodes; i++){
        cout<<"Enter the ID of Node "<<i+1<<": "<<endl;
        cin>>id;
        graph.addNode(id);

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


    graph.printGraphData();
    // If you want neigbours of 1 Specific Node. Give the ID as a parameter to printNeigbours() function.
    // graph.printNeighbors(2);
    // cout<<"Neighbours in Total: "<<graph.getNeighborCount()<<endl;
    
    return 0;
}
