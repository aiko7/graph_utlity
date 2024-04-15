#include <bits/stdc++.h>
using namespace std;
class Node;

class Edge {
  Node *src;
  Node *dest;
  int weight;

public:
  Edge(Node *src, Node *dest, int weight = 1) {
    this->src = src;
    this->dest = dest;
    this->weight = weight;
  }

  int getWeight() const { return weight; }
  Node *getSrc() const { return src; }
  Node *getDest() const { return dest; }

  friend ostream &operator<<(ostream &os, const Edge *edge);
};

class Node {
  string value;
  vector<Edge *> edges;

public:
  Node(string value) { this->value = value; }

  void addEdge(Edge *edge) { edges.push_back(edge); }

  const vector<Edge *> &getEdges() const { return edges; }

  const void printEdges() const {
    for (const auto &edge : edges) {
      cout << edge << endl;
    }
  }
  string getValue() const { return value; }
};

ostream &operator<<(ostream &os, const Edge *edge) {
  os << "Edge from node " << edge->getSrc()->getValue() << " to node "
     << edge->getDest()->getValue();
  return os;
}

class Undirected_graph {

  unordered_map<Node *, vector<Node *>> adjacency_list;

public:
  Undirected_graph() {}

  void addNode(Node *node) { adjacency_list[node] = vector<Node *>(); }

  void addEdge(Node *node1, Node *node2) {
    adjacency_list[node1].push_back(node2);
    adjacency_list[node2].push_back(node1);
  }
};

int main() {
  Undirected_graph graph;
  
  return 0;
}
