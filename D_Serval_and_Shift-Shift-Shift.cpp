#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> shifts; // to store the sequence of shifts
        for (int i = n-1; i >= 0; i--) { // start from the most significant bit
            if (a[i] != b[i]) { // if bits are not matching
                if (i == 0) { // if it's the last bit, we can only move it to the right
                    if (a[0] == b[1]) {
                        shifts.push_back(1);
                        a[0] ^= a[1];
                        a[1] ^= a[0];
                        a[0] ^= a[1];
                    } else {
                        cout << "-1\n";
                        break;
                    }
                } else if (a[i-1] == b[i]) { // check if moving left helps
                    shifts.push_back(i);
                    a[i] ^= a[i-1];
                    a[i-1] ^= a[i];
                    a[i] ^= a[i-1];
                } else if (i > 1 && a[i-2] == b[i]) { // check if moving left by 2 helps
                    shifts.push_back(i-1);
                    shifts.push_back(i);
                    a[i] ^= a[i-1] ^ a[i-2];
                    a[i-1] ^= a[i] ^ a[i-2];
                    a[i-2] ^= a[i] ^ a[i-1];
                    a[i] ^= a[i-1] ^ a[i-2];
                } else if (i == 1 && a[0] == b[1]) { // check if moving left by 1 then right by 1 helps
                    shifts.push_back(1);
                    shifts.push_back(-1);
                    a[1] ^= a[0];
                    a[0] ^= a[1];
                    a[1] ^= a[0];
                } else if (i == 1 && a[0] == b[0]) { // check if moving right by 1 helps
                    shifts.push_back(-1);
                    a[0] ^= a[1];
                    a[1] ^= a[0];
                    a[0] ^= a[1];
                } else { // no way to match the bits
                    cout << "-1\n";
                    break;
                }
            }
            if (i == 0) { // we matched all bits
                cout << shifts.size() << "\n";
                for (int s : shifts) cout << s << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}
