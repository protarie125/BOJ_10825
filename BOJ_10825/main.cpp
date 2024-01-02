#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

struct Dat {
  string nam;
  ll ko;
  ll en;
  ll ma;
};

using vD = vector<Dat>;

ll n;
vD D;

bool comp(const Dat& a, Dat& b) {
  if (a.ko != b.ko) {
    return b.ko < a.ko;
  }

  if (a.en != b.en) {
    return a.en < b.en;
  }

  if (a.ma != b.ma) {
    return b.ma < a.ma;
  }

  return a.nam < b.nam;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  D = vD(n);
  for (auto&& [nam, ko, en, ma] : D) {
    cin >> nam >> ko >> en >> ma;
  }

  sort(D.begin(), D.end(), comp);

  for (const auto& d : D) {
    cout << d.nam << '\n';
  }

  return 0;
}