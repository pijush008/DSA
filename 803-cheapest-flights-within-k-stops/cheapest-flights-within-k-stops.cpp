class Solution {
public:
    struct Info {
        int u;
        int cost;
        int steps; // src to u

        Info(int u, int cost, int steps) {
            this->u = u;
            this->cost = cost;
            this->steps = steps;
        }
    };

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<Info> q;
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        q.push(Info(src, 0, 0));  // steps = 0

        while (!q.empty()) {
            Info curr = q.front();
            q.pop();

            if (curr.steps > k) continue;

            for (const auto& flight : flights) {
                if (flight[0] == curr.u) {
                    int v = flight[1];
                    int wt = flight[2];

                    if (curr.cost + wt < dist[v]) {
                        dist[v] = curr.cost + wt;
                        q.push(Info(v, dist[v], curr.steps + 1));
                    }
                }
            }
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};
