#include <bits/stdc++.h>
#define Max_N 200001

using namespace std;

struct Node {
    vector<int> adj;
    vector<int> rev_adj; // Corrected typo
};

int n, m;
Node g[Max_N];
stack<int> S;
bool visited[Max_N];
int numComponents = 0; // Start from 0

void dfs_1(int v) {
    visited[v] = true;
    for (int u : g[v].adj) {
        if (!visited[u])
            dfs_1(u);
    }
    S.push(v);
}

void dfs_2(int v) {
    visited[v] = true;
    cout << v << " ";
    for (int u : g[v].rev_adj) {
        if (!visited[u])
            dfs_2(u);
    }
}

void kosaRaju() {
    // Step 1: Perform DFS and push vertices to stack according to their finish times
    for (int i = 1; i <= n; i++) { // Assuming nodes are 1-indexed
        if (!visited[i])
            dfs_1(i);
    }

    // Step 2: Reset visited array for second DFS
    fill(visited, visited + n + 1, false); // Reset visited array

    // Step 3: Process all vertices in order defined by the stack
    while (!S.empty()) {
        int v = S.top();
        S.pop();
        if (!visited[v]) {
            numComponents++;
            cout << "Component " << numComponents << ": ";
            dfs_2(v);
            cout << endl;
        }
    }
}

int main() {
    cin >> n >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        g[a].adj.push_back(b);
        g[b].rev_adj.push_back(a);
    }

    kosaRaju();
    cout << "Total number of Strongly Connected Components: " << numComponents << endl;
    return 0;
}
