#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph {
  public:
    DenseGraph() {
        // Your code here
        n = 3;
        gph.resize(n);
        for (auto &i : gph)
            i.resize(n);
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        gph.resize(n);
        for (auto &i : gph)
            i.resize(n);
    }

    DenseGraph(const DenseGraph &G) {
        // Your code here
        n = G.n;
        gph = G.gph;
    }

    void AddEdge(int a, int b) {
        // Your code here
        gph[a][b] = 1;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        gph[a][b] = 0;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return gph[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph r(n);

        for (int c = 0; c < n; c++)
            for (int c2 = 0; c2 < n; c2++)
                r.gph[c2][c] = gph[c][c2];
        return r;
    }

  protected:
    int n;
    vector<vector<bool>> gph;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
