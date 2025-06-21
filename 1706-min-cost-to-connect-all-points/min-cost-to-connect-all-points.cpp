class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v = points.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // (weight, vertex)
        vector<bool> mst(v, false);
        pq.push({0, 0});
        int minCost = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();

            if (!mst[u]) {
                mst[u] = true;
                minCost += cost;

                for (int i = 0; i < v; i++) {
                    if (!mst[i]) {
                        int wt = abs(points[u][0] - points[i][0]) + abs(points[u][1] - points[i][1]);
                        pq.push({wt, i});
                    }
                }
            }
        }

        return minCost;
    }
};
