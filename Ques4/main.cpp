#include<iostream>
#include "AttributedWeightedGraph.h"
#include "AttributedWeightedGraph.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"

using namespace std;


int main() {

    int total_number_of_Nodes, id, num_of_neighbours, neighbour1, neighbour2;

    cout << "How Many Nodes do you want to add: " << endl;
    cin >> total_number_of_Nodes;

    AttributedWeightedGraph graph(total_number_of_Nodes);

    for (int i = 0; i < total_number_of_Nodes; i++) {
        cout << "Enter the ID of Node " << i + 1 << ": " << endl;
        cin>>id;

        graph.SimpleGraph::addNode(id);
        graph.AttributedGraph2::appendAttributes(id);
    }

    // New Array of Nodes to access it here.
    SimpleNode** nodesArray = graph.getnodes();

    for (int i = 0; i < total_number_of_Nodes; i++) {
        int nodeId = nodesArray[i]->getNodeId();
        cout << "Node ID: " << nodeId << endl;
    }
    cout<<endl<<endl;
    
    graph.edgeweightArray(total_number_of_Nodes);

    cout<<endl<<endl;

    for (int i = 0; i < total_number_of_Nodes; i++) {
        for (int j = i + 1; j < total_number_of_Nodes; j++) {
            int id1,id2;

            id1 = nodesArray[i]->getNodeId();
            id2 = nodesArray[j]->getNodeId();
            
            cout << "Enter the weight between Node " << id1 << " and Node " << id2<< ": ";
            int weight;
            cin >> weight;
            graph.appendWeight(id1, id2, weight);

            graph.edgeweightArray(total_number_of_Nodes);

        }
    }

    cout << "How many Neighbours do you want to add: " << endl;
    cin >> num_of_neighbours;

    for (int i = 0; i < num_of_neighbours; i++) {
        cout << "\nSet " << i + 1 << " of Neighbours: " << endl;
        cout << "Enter ID of Neighbour 1: " << endl;
        cin >> neighbour1;
        cout << "Enter ID of Neighbour 2: " << endl;
        cin >> neighbour2;
        graph.SimpleGraph::addEdge(neighbour1, neighbour2);
    }

    graph.AttributedGraph1::appendAttributes();
    graph.printData();

    return 0;
}

