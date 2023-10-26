#include<iostream>
#include"AttributedGraph1.h"
#include"AttributedGraph1.cpp"
#include"AttributedGraph2.h"
#include"AttributedGraph2.cpp"
#include"AttributedNode1.h"
#include"AttributedNode1.cpp"
#include"AttributedNode2.h"
#include"AttributedNode2.cpp"
#include"AttributedWeightedGraph.h"
#include"AttributedWeightedGraph.cpp"


using namespace std;

int main(){    
    // sendMessage of AttributedGraph1
    cout<<"\n\tSend Message of AttributedGraph1"<<endl;
    AttributedGraph1 attributedGraph1;
    SimpleGraph* ptr;
    ptr = &attributedGraph1;
    cout<<endl;
    ptr->sendMessage();


    // sendMessage of AttributedGraph2
    cout<<"\n\tSend Message of AttributedGraph2"<<endl;
    AttributedGraph2 attributedGraph2;
    SimpleGraph* ptr1;
    ptr1 = &attributedGraph2;
    cout<<endl;
    ptr1->sendMessage();


     
    return 0;
}