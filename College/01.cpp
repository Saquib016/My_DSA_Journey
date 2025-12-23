#include <iostream>
#include <queue>
using namespace std;

int solve(int n) {
    queue<int> q;
    for (int i = 1; i <= n; ++i)
        q.push(i);
    while (q.size() > 1) {
        q.pop(); // Step 1: Remove the front element
        if (!q.empty()) {
            int tmp = q.front();
            q.pop();           // Step 2: Remove new front
            q.push(tmp);       // ...and push it to back
        }
    }
    return q.front();
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << solve(N) << endl;
    }
    return 0;
}
