class Solution {
public:
    int INF=2147483647;
    void islandsAndTreasure(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int,int>> q;

        // Put all treasures into the queue
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {

            auto curr = q.front();
            q.pop();

            int r = curr.first;
            int c = curr.second;

            for (int k = 0; k < 4; k++) {

                int nr = r + dr[k];
                int nc = c + dc[k];

                // Boundary check
                if (nr < 0 || nr >= rows || nc < 0 || nc >= cols)
                    continue;

                // Visit only unvisited land
                if (grid[nr][nc] == INF) {

                    grid[nr][nc] = grid[r][c] + 1;

                    q.push({nr, nc});
                }
            }
        }
    }
};