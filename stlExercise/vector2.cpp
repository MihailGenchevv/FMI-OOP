#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main(){

    vector<int> ints;

    for (int i =0; i < 100; i++){
        ints.push_back(i);
    }

    for (size_t i = 0; i < ints.size(); i++){
        cout << ints[i] << " ";
    }

    for (std::vector<int>::iterator it = ints.begin(); it != ints.end(); it++){
        cout << *it << " ";
    }
    // WITH AUTO
    for (auto it = ints.begin(); it != ints.end(); it++){
        cout << *it << " ";
    }

    // SHORT WAY (FOR EACH)
    for (int x : ints) {
        cout << x << " ";
    }


    ints[5] = 42;
    int index5Val = ints.at(5);

    vector<int>::iterator index5 = ints.begin() + 5;
    *index5 = 422;
    ints.insert(index5, 7);
    ints.erase(index5);

    ints.clear();


}