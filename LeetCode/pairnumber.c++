#include <bits/stdc++.h>
using namespace std;

using namespace std;

vector<pair<int, int>> pair_sum_equal_to_s(vector<int>& arr, int s) {
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> result;
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        int current_sum = arr[left] + arr[right];
        if (current_sum == s) {
            result.push_back(make_pair(arr[left], arr[right]));
            left++;
            right--;
        }
        else if (current_sum < s) {
            left++;
        }
        else {
            right--;
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 10;
    vector<pair<int, int>> result = pair_sum_equal_to_s(arr, s);
    
    for (int i = 0; i < result.size(); i++) {
        cout << "(" << result[i].first << ", " << result[i].second << ")" << endl;
    }
    
    return 0;
}
