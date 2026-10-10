
class Solution {
public:
    void reversePart(int i, int j, string& s) {
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    bool rotateString(string s, string goal) {
        int n = s.length();
        if (n != goal.size()) return false;
        for (int k = 0; k < n; k++) {
            string temp = s;
            reversePart(0, k - 1, temp);
            reversePart(k, n - 1, temp);
            reversePart(0, n - 1, temp);
            if (temp == goal) return true;
        }
        return false;
    }
};
