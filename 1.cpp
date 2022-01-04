#include <iostream>
#include <ctime>

using namespace std;

const int MAX_LEN = 235435646;
const int MAX = 1000;
const int MIN = 0;

int main() {
    clock_t start, finish;
    int *array, length, index, k;
    unsigned seed;

    seed = time(nullptr);
    srand(seed);
    array = new int[MAX_LEN];
    for (length = 0; length < MAX_LEN; ++length) {
        array[length] = (rand() % MAX + MIN);
    }
    index = length;
    cout << "Please enter K:";
    cin >> k;
    start = clock();
    while (array[index] != k && index >= 0) {
        index--;
    }
    finish = clock();
    cout << (index != -1 ? "Find successful." : "Find failed.") << "\n";
    cout << "Lookup time: " << finish - start << "ms";
    return 0;
}
