class Solution {
public:
    int minPartitions(string n) {
      int m = INT_MIN;
      for (int i = 0; i < n.size(); i++) {
        int temp = n[i] - '0';
        if (temp > m) {
            m = temp;
        }
      }
      return m;
    }
};
