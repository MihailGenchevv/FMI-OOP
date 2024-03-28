#include <iostream>


using namespace std;


template <typename Ivan>
Ivan maX(Ivan a , Ivan b){
    if ( a > b ) return a;
    else return b;
}

int main() {
    cout << maX(7,10);

    return 0;
}