#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num;
    for(int i=1;i<n;i++) {
        if(i%3 == 0) num.push_back(i);
        else if(i%10 == 3) num.push_back(i);
    }
    for_each(num.begin(),num.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;
}
