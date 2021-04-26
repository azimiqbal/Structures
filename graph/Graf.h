//
// Created by Azim Iqbal on 2019-04-07.
//

#ifndef OBLIG2_GRAF_H
#define OBLIG2_GRAF_H


#include "std_lib_facilities.h"

struct node
{
    int data;
    vector<node*> naboer;  //vector i nodene som inneholder peker til naboene til en node
    void add_nabo(node* n);
};

class Graf
{
public:
    Graf();
    ~Graf();
    vector <node*> noder;   //vector som peker til node
    void createNode(int value);
    void removeNode(int a);
    node* find(int a);  //peker som brukes til å finne node
    void add_edge_directed(int a, int b);      //rettet graf
    void add_edge_undirected(int a, int b);    //urettet graf
    void remove_edge_directed(int a, int b);   //fjern rettet
    void remove_edge_undirected(int a, int b); //fjern urettet
    void printGraf();
};


#endif //OBLIG2_GRAF_H
