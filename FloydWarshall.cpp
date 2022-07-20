function <void()> FloydWarshall = [&]() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            distances[i][j] = (i != j) ? graph[i][j] : 0;
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (distances[i][k] + distances[k][j] < distances[i][j]) {
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }
        }
    }
};

// How to use. Don't forget to inicialize matrix representation of graph (n*n) and (n*n) matrix of distences. 
FloydWarshall();




(***)
vector <vector <ll>> graph(n, vector <ll> (n, inf));
vector <vector <ll>> distances(n, vector <ll> (n, 0));
