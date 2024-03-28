#include <iostream>
#include <vector>


template <class T>
T max(T a, T b) {
    if (a  > b ){
        return a;
    }
    return b;
}


int main() {

    std::vector<double> v;
    v.push_back(5.7);
    v.push_back(2.2);
    v.push_back(7.8);
    v.push_back(2.6);

    if (v.empty()) {
        std::cout << "No max\n";
    }else {
        double maxEl = -1;

        for (auto x : v) {
            maxEl = max<double>(maxEl, x);
        }
        std::cout << maxEl << std::endl;
    }

    std::vector<int> v2;
    v2.push_back(5);
    v2.push_back(2);
    v2.push_back(10);
    v2.push_back(3);

    if (v.empty()) {
        std::cout << "No max\n";
    }else {
        int maxEl = -1;

        for (auto x : v2) {
            maxEl = max(maxEl, x);
        }
        std::cout << maxEl << std::endl;
    }

}
