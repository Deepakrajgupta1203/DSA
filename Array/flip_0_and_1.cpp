#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 1, 0, 0, 1, 1};

    for(int i=0;i<arr.size();i++){
        arr[i]=~arr[i]&1;
    }

    for (auto val : arr) {
        cout << val << " ";
    }

    return 0;
}
