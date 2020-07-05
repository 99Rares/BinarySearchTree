#include <iostream>
#include"tree.h"
#include <cassert>
#define COUNT 10


int main() {
    tree tr;
    tr.insert('C');
    tr.insert('A');
    tr.insert('B');
    tr.insert('E');
    tr.insert('G');    
    tr.insert('D');    
    tr.insert('F');
    //assert(tr.countNodes(tr.wurzel) == 10);
    //std::cout << "Test Insert OK\n";
    //tr._delete(tr.wurzel,100);
    //assert(tr.countNodes(tr.wurzel) == 9);
    //std::cout << "Test Delete OK\n";
    //tr.insert(70);
    //tr.insert(87);
    //tr.insert(80);
    //assert(tr.inorder(tr.wurzel) == "2 3 4 21 32 50 64 70 76 80 83 87 ");
    //assert(tr.preorder(tr.wurzel) == "50 21 4 2 3 32 76 64 70 83 80 87 ");
    //assert(tr.postorder(tr.wurzel) == "3 2 4 32 21 70 64 80 87 83 76 50 ");
    //std::cout << "Test orders OK\n";
    //assert(tr.countNodes(tr.wurzel) == 12);
    //std::cout << "Test Count Nodes OK\n";
    //assert(tr.countEdges(tr.wurzel) == 11);
    //std::cout << "Test Count Edges OK\n";
    //assert(tr.height(tr.wurzel) == 5);
    //std::cout << "Test height OK\n\n";
    //std::cout << "Teste bestanden\n";
    tr.print2D();
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << "inorder: \n";
    std::cout << tr.inorder(tr.wurzel);
    std::cout << "\npreorder: \n";
    std::cout << tr.preorder(tr.wurzel);
    std::cout << "\npostorder: \n";
    std::cout << tr.postorder(tr.wurzel);
    std::cout << " \n";
    std::cout << " \n";
}