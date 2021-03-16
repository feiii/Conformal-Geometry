#include <map>
#include <vector>
#include <iostream>

struct Node {
    int weight;
    int data;
};

int main(int argc, char *argv[]) {
    Node n1, n2, n3;
    n1.weight = 0;
    n2.weight = 1;
    n3.weight = 2;
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;
    std::vector<Node> nodes;
    nodes.push_back(n1);
    nodes.push_back(n2);
    nodes.push_back(n3);

    std::map<int, Node, std::greater<int>> tree;
    tree.emplace(n1.weight, n1);
    tree.emplace(n2.weight, n2);
    tree.emplace(n3.weight, n3);

    std::map<int, Node, std::greater<int>>::iterator it = tree.begin();
    std::cout << "data = " << it->second.data << std::endl;

    tree.erase(n2.weight);
    n2.weight = 10;
    tree.emplace(n2.weight, n2);
    it = tree.begin();
    std::cout << "data = " << it->second.data << std::endl;

    
}