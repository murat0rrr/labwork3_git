#include <iostream>
#include <vector>

void siftDown(std::vector<int> vals[], std::vector<int> index, int i, int n) {
    while (2 * i + 1 < n) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int j = left;
        if (right < n && vals[right] > vals[left]) {
            j = right;
        }
        if (vals[i] >= vals[j]) {
            break;
        }
        std::swap(vals[i], vals[j]);
        i = j;
    }
}

void siftUp (std::vector<int> vals[], std::vector<int> index[]) {
    int i = vals->size();
    while (vals[i] < vals[(i - 1) / 2]) {
        std::swap(vals[i], vals[(i - 1) / 2]);
    }
}
void buildHeap(std::vector<int> vals[], std::vector<int> index[], int n) {
    for (int i = n / 2; i >= 0; i--) {
        siftDown(vals, index, i, n);
    }
}
void siftUp (std::vector<int> vals[], std::vector<int> index[]) {
    int i = vals->size();
    while (vals[i] < vals[(i - 1) / 2]) {
        std::swap(vals[i], vals[(i - 1) / 2]);
    }
}
void buildHeap(std::vector<int> vals[], std::vector<int> index[], int n) {
    for (int i = n / 2; i >= 0; i--) {
        siftDown(vals, index, i, n);
    }
}

void push(std::vector<int> val[], std::vector<int> index[], int x) {

}

void extract_min(std::vector<int> arr[], std::vector<int> index[]) {

}

void decrease_key(std::vector<int> arr[], std::vector<int> index[], int pos, int y) {

}
int main() {
    int buff;
    int pos;
    std::string str;
    std::vector<int> arr_vals;
    std::vector<int> arr_index;

    while (std::cin >> str) {
        if (str == "push") {
            std::cin >> buff;
            push(arr_vals, buff);
        } else if (str == "decrease-key") {
            std::cin >> pos >> buff;
            decrease_key(arr_vals, pos, buff);
        } else {
            extract_min(arr_vals);
        }
    }
    return 0;
}
