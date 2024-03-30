#include <vector>
#include <iostream>


class Assignment {
public:
    virtual int getPoints() const = 0;
    virtual ~Assignment() {}
};

class Homework1: public Assignment {
    int task1;
public:

    Homework1(int points ){
        task1= points;
    }

    int getPoints() const {
        return task1;
    }
};


class Homework2: public Assignment {
    std::vector<int> points;
public:
    Homework2(int task1Points, int task2Points) {
        points.push_back(task1Points);
        points.push_back(task2Points);
    }

    int getPoints() const {
        int total = 0;
        for (auto x : points) {
            total += x;  
        }
        return total;
    }
};


int main() {

    Assignment * hw1 = new Homework1(1);
    Assignment * hw2 = new Homework2(4,2);

    std::vector<Assignment *> assignments;

    assignments.push_back(hw1);
    assignments.push_back(hw2);

    for (auto ptr : assignments){
        std::cout << ptr->getPoints() << std::endl;
        Homework1* hw1Maybe = dynamic_cast<Homework1*>(ptr);
    }

    
    std::cout << static_cast<int>(42.42);


    // Assignment* * assin = new Assignment*[10];
    // assin[0] = hw1;
    // assin[1] = hw2;
    // delete[] assin;
}