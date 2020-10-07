#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime) {
    int total = 0;
    PV1(total);
    for (size_t i = 0; i < startTime.size(); i++) {
      PV1(i);
      if (queryTime >= startTime[i] && queryTime <= endTime[i])
        ++total;
    }
    return total;
  }
};

void test1() {
  cout << boolalpha;
  vector<int> arr{1, 2, 3};
  vector<int> arr2{3, 2, 7};

  cout << " ? " << Solution().busyStudent(arr, arr2, 4) << endl;
}

void test2() {}

void test3() {}
