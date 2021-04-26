//
// Created by Azim Iqbal on 2019-04-07.
//

#include "Graf.h"



Graf::Graf(){}

Graf::~Graf(){}


node * Graf::find(int a)
{
    for (int i = 0; i < noder.size(); i++)
    {
        if (noder[i]->data == a)
        {
            return noder[i];
        }
    }
}

void node::add_nabo(node * n)
{
    naboer.push_back(n);
}

void Graf::add_edge_directed(int a, int b)
{
    node* temp1 = find(a);
    node* temp2 = find(b);
    temp1->add_nabo(temp2);


}

void Graf::add_edge_undirected(int a, int b)
{
    add_edge_directed(a, b);
    add_edge_directed(b, a);
}

void Graf::remove_edge_undirected(int a, int b)
{
    remove_edge_directed(a, b);
    remove_edge_directed(b, a);
}

void Graf::remove_edge_directed(int a, int b)
{
    node *nodeA = find(a);
    node *nodeB = find(b);

    for (int i = nodeA->naboer.size() - 1; i >= 0; i--)
    {
        if (nodeA->naboer[i] == nodeB)
        {
            nodeA->naboer.erase(nodeA->naboer.begin() + i);
            break;
        }
    }
}


void Graf::createNode(int value)
{
    node *temp = new node;
    temp->data = value;
    noder.push_back(temp);
}

void Graf::removeNode(int a)
{
    node* nodeA = find(a);
    for (int i = 0; i < noder.size(); i++)
    {
        remove_edge_directed(noder[i]->data, a); // prøv å slett edgen mellom node på plass i og
        // nodeA. Hvis det ikke er en edge så skjer det ikke noe.
    }


    for (int i = 0; i < noder.size(); i++)
    {
        if (noder[i] == nodeA)
        {
            cout << endl<< "erased node: " << i << endl;
            noder.erase(noder.begin() + i);
            break;
        }
    }
    delete nodeA;
}

void Graf::printGraf()
{
    for (int i = 0; i < noder.size(); i++)
    {
        cout << noder[i]->data << " => ";
        for (int j = 0; j < noder[i]->naboer.size(); j++)
        {
            cout << noder[i]->naboer[j]->data << ", ";
        }
        cout << endl;
    }
}