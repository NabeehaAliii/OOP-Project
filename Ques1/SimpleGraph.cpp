#include<iostream>
#include "SimpleGraph.h"

using namespace std;

SimpleGraph::SimpleGraph() {
    numNodes = 0;
    numEdges = 0;
    nodes = nullptr;
    cout << "This is the Default Constructor of SimpleGraph\n" <<endl;
}


SimpleGraph::SimpleGraph(int numNodes) : numNodes(numNodes){
    nodes = new SimpleNode*[numNodes];
}


void SimpleGraph::addNode(int nodeId) {
    SimpleNode** newNodesArr = new SimpleNode*[numNodes + 1];
    for (int i = 0; i < numNodes; i++) {
        newNodesArr[i] = nodes[i];
    }
    
    delete[] nodes;
    nodes = newNodesArr;
    nodes[numNodes] = new SimpleNode(nodeId, 0);
    numNodes++;
}

void SimpleGraph::addEdge(int nodeId1, int nodeId2) {
    SimpleNode* node1 = nullptr;
    SimpleNode* node2 = nullptr;
    for (int i = 0; i < numNodes; i++) {
        if (nodes[i]->getNodeId() == nodeId1)
            node1 = nodes[i];
        if (nodes[i]->getNodeId() == nodeId2)
            node2 = nodes[i];
    }
    if (node1 != nullptr && node2 != nullptr) {
        node1->addEdge(*node2);                 // SimpleNode Fucntion CAlled
        node2->addEdge(*node1);
    }
}

// int SimpleGraph::getNeighborCount() const {
//     int count = 0;
//     for (int i = 0; i < numNodes; i++) {
//         count += nodes[i]->getNeighborCount();
//     }
//     return count;
// }

// For Specifically one id 
void SimpleGraph::printNeighbors(int nodeId) const {
    for (int i = 0; i < numNodes; i++) {
        if (nodes[i]->getNodeId() == nodeId) {
            nodes[i]->getNeighbors();             // SimpleNode>> getNeighbour()
            return;
        }
    }
    cout << "Node not found!" << endl;
}

void SimpleGraph::printGraphData() const {
    for (int i = 0; i < numNodes; i++) {
        nodes[i]->getNeighbors();                 // SimpleNOde>> getNeighbours()
        cout <<endl;
    }
}


SimpleGraph::~SimpleGraph() {
    for (int i = 0; i < numNodes; i++) {
        delete nodes[i];
    }
    
    delete[] nodes;
    cout << "This is the Destructor of SimpleGraph." << endl;
}

