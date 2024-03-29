#include <iostream>
#include <string>



class StudentScore{
    int fn;
    int task1Points;
    int task2Points;
    std::string name;

    friend std::istream& operator>>(std::istream& in, StudentScore& s);
    friend std::ostream& operator<<(std::ostream& out, StudentScore& s);

};

std::istream& operator>>(std::istream& in, StudentScore& s) {
    char trash;
    in >> s.fn;
    in >> trash;
    in >> s.task1Points;
    in >> trash;
    in >> s.task2Points;
    in >> trash;
    in >> s.name;
}

std::ostream& operator<<(std::ostream& out , StudentScore& s){
    out << s.fn << "," << s.task1Points << "," << s.task2Points << "," << s.name << "\n";

    return out;
}


int main(){
    StudentScore s;
    std::cin >> s;
    std::cout << s;
}