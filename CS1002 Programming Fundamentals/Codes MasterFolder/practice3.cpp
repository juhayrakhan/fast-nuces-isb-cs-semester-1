#include <iostream>
using namespace std;

bool dfs(int row, bool** adj, int* matchCountry, bool* visited, int n) {
    for (int col = 0; col < n; col++) {
        if (adj[row][col] && !visited[col]) {
            visited[col] = true; 

            if (matchCountry[col] == -1 ||
                dfs(matchCountry[col], adj, matchCountry, visited, n)) {
                matchCountry[col] = row;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    // allocate adjacency matrix
    bool** adj = new bool*[m];
    for (int i = 0; i < m; i++) {
        adj[i] = new bool[n];
        for (int j = 0; j < n; j++)
            adj[i][j] = false;
    }

    // read ranges
    for (int i = 0; i < m; i++) {
        int l, row;
        cin >> l >> row;

        if (l <= row) {
            for (int col = l; col <= row; col++)
                adj[i][col] = true;
        } else {
            // wrap around
            for (int col = l; col < n; col++)
                adj[i][col] = true;
            for (int col = 0; col <= row; col++)
                adj[i][col] = true;
        }
    }

    int* matchCountry = new int[n];
    for (int i = 0; i < n; i++)
        matchCountry[i] = -1;

    int matched = 0;

    for (int i = 0; i < m; i++) {
        bool* visited = new bool[n];
        for (int j = 0; j < n; j++)
            visited[j] = false;

        if (dfs(i, adj, matchCountry, visited, n))
            matched++;

        delete[] visited;
    }

    if (matched == m)
        cout << "YES";
    else
        cout << "NO";

    // cleanup
    for (int i = 0; i < m; i++)
        delete[] adj[i];
    delete[] adj;
    delete[] matchCountry;

    return 0;
}