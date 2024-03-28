#include <iostream>
#include <string>
#include <vector>

template <class KEY, class VALUE>
class Pair {
public:
    KEY key;
    VALUE value;

    KEY getKey(){
        return key;
    }

    VALUE getValue(){
        return value;
    }

    void setKey(KEY newKey){
        this->key = newKey;
    }

    void setValue(VALUE newValue);
};
//define method outside
template <class KEY, class VALUE>
void Pair<KEY, VALUE>::setValue(VALUE newValue){
    value = newValue;
}

// template specialization
template <>
void Pair<int, bool>::setValue(bool newValue){
    std::cout << "hello from int bool";
    value = newValue;
}


typedef char BYTE;
#define pairIntBool Pair<int, bool>

int main() {

    pairIntBool pair;
    Pair<BYTE,BYTE> pairByte;

    Pair<std::string, BYTE> pairStringByte;

    pairStringByte.setValue('a');

    std::vector<int> vecInts;

}