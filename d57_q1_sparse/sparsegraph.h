#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <bits/stdc++.h>

using namespace std;

class SparseGraph {
  public:
    SparseGraph() {
        // Your code here
        gph.resize(3);
    }

    SparseGraph(int n_in) {
        // Your code here
        gph.resize(n_in);
    }

    SparseGraph(const SparseGraph &G) {
        // Your code here
        gph = G.gph;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if (find(gph[a].begin(), gph[a].end(), b) == gph[a].end())
            gph[a].push_back(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        vector<int>::iterator it = find(gph[a].begin(), gph[a].end(), b);

        if (it != gph[a].end())
            gph[a].erase(it);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return find(gph[a].begin(), gph[a].end(), b) != gph[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph r(gph.size());

        for (int c = 0; c < gph.size(); c++) {
            for (auto i : gph[c]) {
                r.gph[i].push_back(c);
            }
        }
        return r;
    }

  protected:
    // Your code here
    vector<vector<int>> gph;
};
#endif // __SPARSE_GRAPH_H__
