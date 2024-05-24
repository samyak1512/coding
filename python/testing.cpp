#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long t;
    cin >> t;

    for(long long c = 0; c < t; c++) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        long long i = 0;
        long long sumi = arr[0];
        while(i < n-1) {
            if((i+1)*arr[i+1] - sumi > k) {
                break;
            }
            sumi += arr[i+1];
            i++;
        }

        long long used = (i+1)*arr[i] - sumi;
        k -= used;

        long long more = k/(i+1);
        long long mini = arr[i] + more;
        long long left = k%(i+1);

        for(long long j = 0; j <= i; j++) {
            arr[j] = mini;
            if((i+1) <= j + left) {
                arr[j] += 1;
            }
        }

        if(n == 1) {
            cout << arr[0] << endl;
        } else {
            long long mylen;
            if(arr[0] != arr[1]) {
                mylen = arr[0]*n + n-1;
            } else {
                long long j = 1;
                while(j < n) {
                    if(arr[j] != arr[0]) {
                        break;
                    }
                    j++;
                }
                mylen = arr[0]*n + n-j;
            }
            cout << mylen-n+1 << endl;
        }
    }

    return 0;
}
