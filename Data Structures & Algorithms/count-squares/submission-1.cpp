class CountSquares {
public:
    map<pair<int,int>, int> freq;

    CountSquares() {

    }

    void add(vector<int> point) {
        freq[{point[0], point[1]}]++;
    }

    int count(vector<int> point) {

        int x = point[0];
        int y = point[1];

        int ans = 0;

        for (auto &it : freq) {

            int nx = it.first.first;
            int ny = it.first.second;

            // must be a diagonal
            if (abs(nx - x) != abs(ny - y) || nx == x || ny == y)
                continue;

            ans += it.second *
                   freq[{nx, y}] *
                   freq[{x, ny}];
        }

        return ans;
    }
};