ll inf = (ll) 10e17;
vector <ll> dist(n, inf);
vector <int> parent(n, -1);

// Dijkstra algorithm. O (|E| * log(|V|) total time complexity. 
function <void(int)> Dijkstra = [&](int v) {
     dist[v] = 0;
     set <pair <ll, int>> SE;
     SE.insert({(ll) 0, v});
     while (!SE.empty()) {
        auto cur = *(SE.begin());
        SE.erase(cur);
        for (auto to: graph[cur.second]) {
            if (dist[to.first] > dist[cur.second] + to.second) {
                SE.erase({dist[to.first], to.first});
                dist[to.first] = dist[cur.second] + to.second;
		parent[to.first] = cur.second;
		SE.insert({dist[to.first], to.first});
            }
        }
    }
};


// How to use. Don't forget to initialize <dist> and <graph>. 
Dijkstra(0);
