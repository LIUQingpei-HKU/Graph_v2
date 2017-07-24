#include <iostream>
#include "SparseGraph.h"
#include "DenseGraph.h"
#include "ReadGraph.h"
#include "Components.h"
#include "Path.h"
#include "ShortestPath.h"

using namespace std;

// 测试图的联通分量算法
int main() {

//    // TestG1.txt
//    string filename1 = "testG1.txt";
//    SparseGraph g1 = SparseGraph(13, false);
//    ReadGraph<SparseGraph> readGraph1(g1, filename1);
//    Component<SparseGraph> component1(g1);
//    cout<<"TestG1.txt, Component Count: "<<component1.count()<<endl;
//
//    cout<<endl;
//
//    // TestG2.txt
//    string filename2 = "testG2.txt";
//    SparseGraph g2 = SparseGraph(7, false);
//    ReadGraph<SparseGraph> readGraph2(g2, filename2);
//    Component<SparseGraph> component2(g2);
//    cout<<"TestG2.txt, Component Count: "<<component2.count()<<endl;

    string filename="testG2.txt";
    SparseGraph g = SparseGraph(7, false);
    ReadGraph<SparseGraph> readGraph(g,filename);
    g.show();
    cout<<endl;

    Path<SparseGraph> dfs(g,0);
    cout<<"DFS: ";
    dfs.showPath(6);

    ShortestPath<SparseGraph> bfs(g,0);
    cout<<"BFS: ";
    bfs.showPath(6);
    return 0;
}