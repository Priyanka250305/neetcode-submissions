class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        // minDist[i] = cheapest cost to connect point i
        // to the MST built so far
        vector<int> minDist(n, INT_MAX);

        // Whether point is already included in MST
        vector<bool> visited(n, false);

        minDist[0] = 0;

        int totalCost = 0;

        for (int count = 0; count < n; count++) {

            // Find unvisited point with minimum connection cost
            int u = -1;

            for (int i = 0; i < n; i++) {
                if (!visited[i] &&
                    (u == -1 || minDist[i] < minDist[u])) {
                    u = i;
                }
            }

            // Add it to MST
            visited[u] = true;
            totalCost += minDist[u];

            // Update costs of connecting remaining points
            for (int v = 0; v < n; v++) {

                if (visited[v])
                    continue;

                int dist =
                    abs(points[u][0] - points[v][0]) +
                    abs(points[u][1] - points[v][1]);

                minDist[v] = min(minDist[v], dist);
            }
        }

        return totalCost;
    }
};