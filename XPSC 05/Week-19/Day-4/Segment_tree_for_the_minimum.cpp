#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF INT_MAX

class SegmentTree {
private:
  vector<int> tree;
  int n;

  void build(vector<int> &arr, int node, int start, int end) {
    if (start == end) {
      tree[node] = arr[start];
    } else {
      int mid = (start + end) / 2;
      build(arr, 2 * node + 1, start, mid);
      build(arr, 2 * node + 2, mid + 1, end);
      tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }
  }

  void update(int node, int start, int end, int idx, int value) {
    if (start == end) {
      tree[node] = value;
    } else {
      int mid = (start + end) / 2;
      if (idx <= mid)
        update(2 * node + 1, start, mid, idx, value);
      else
        update(2 * node + 2, mid + 1, end, idx, value);
      tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }
  }

  int query(int node, int start, int end, int l, int r) {
    if (r < start || end < l)
      return INF;
    if (l <= start && end <= r)
      return tree[node];

    int mid = (start + end) / 2;
    int leftMin = query(2 * node + 1, start, mid, l, r);
    int rightMin = query(2 * node + 2, mid + 1, end, l, r);
    return min(leftMin, rightMin);
  }

public:
  SegmentTree(vector<int> &arr) {
    n = arr.size();
    tree.resize(4 * n, INF);
    build(arr, 0, 0, n - 1);
  }

  void update(int idx, int value) {
    update(0, 0, n - 1, idx, value);
  }

  int query(int l, int r) {
    return query(0, 0, n - 1, l, r);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

  int n, m;
  cin >> n >> m;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  SegmentTree segTree(arr);

  while (m--) {
    int type;
    cin >> type;
    if (type == 1) {
      int i, v;
      cin >> i >> v;
      segTree.update(i, v);
    } else if (type == 2) {
      int l, r;
      cin >> l >> r;
      cout << segTree.query(l, r - 1) << "\n";
    }
  }

  return 0;
}
