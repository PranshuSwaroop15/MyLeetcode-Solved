class Solution {
public:
    int maxRepOpt1(string text, int res = 1) {
  vector<vector<int>> idx(26);
  for (auto i = 0; i < text.size(); ++i) idx[text[i] - 'a'].push_back(i);
  for (auto n = 0; n < 26; ++n) {
    auto cnt = 1, cnt1 = 0, mx = 0;
    for (auto i = 1; i < idx[n].size(); ++i) {
      if (idx[n][i] == idx[n][i - 1] + 1) ++cnt;
      else {
          cnt1 = idx[n][i] == idx[n][i - 1] + 2 ? cnt : 0;
          cnt = 1;
      }
      mx = max(mx, cnt1 + cnt);        
    }
    res = max(res, mx + (idx[n].size() > mx ? 1 : 0));
  }
  return res;
}
};