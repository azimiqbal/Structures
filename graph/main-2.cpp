#include "Graf.cpp"

int main()
{
    Graf minGraf;
    minGraf.createNode(3);
    minGraf.createNode(5);
    minGraf.createNode(8);
    minGraf.createNode(9);

    minGraf.add_edge_directed(3, 5);
    minGraf.add_edge_undirected(8, 9);

    minGraf.printGraf();

    minGraf.remove_edge_directed(3, 5);  //fjerner rettet mellom 3 og 8
    cout << endl << endl;
    minGraf.printGraf();

    minGraf.removeNode(8);
    cout << endl << endl;
    minGraf.printGraf();
    cout << endl << endl;

    minGraf.removeNode(9);
    minGraf.printGraf();

    cout << "wooooo";
}