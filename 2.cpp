#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
const int MAX_LEN = 235435646;

int main() {
    fstream f;
    clock_t start, finish;
    int *array, length, index, k, num = 0;
    array = new int[MAX_LEN];
    for (int i = 0; i < MAX_LEN; ++i) {
        array[i] = i;
    }
    cout << "Please enter K:";
    cin >> k;
    start = clock();
    int low, high, mid;
    low = 0;
    high = MAX_LEN;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] < k) {
            low = mid + 1;   
        } else {
            if (array[mid] > k) {
                high = mid - 1; 
            } else {   
                break;
            }
        }
    }
    finish = clock();
    cout << (low > high ? "Find successful." : "Find failed.") << "\n";
    cout << "Lookup time: " << finish - start << "ms";
    return 0;
}