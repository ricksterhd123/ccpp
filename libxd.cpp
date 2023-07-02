#include "libxd.h"

class Integer {
    private:
        int value;

    public:
    Integer() {
        this->value = 0;
    }

    Integer(int n) {
        this->value = n;
    }

    int getValue() {
        return this->value;
    }

    Integer operator+(Integer rhs) {
        return this->value + rhs.value;
    }
    Integer operator-(Integer rhs) {
        return this->value - rhs.value;
    }
    Integer operator*(Integer rhs) {
        return this->value * rhs.value;
    }

    bool operator<(Integer rhs) {
        return this->value < rhs.value;
    }
    bool operator>(Integer rhs) {
        return this->value > rhs.value;
    }
    bool operator<=(Integer rhs) {
        return this->value <= rhs.value;
    }
    bool operator>=(Integer rhs) {
        return this->value >= rhs.value;
    }
    bool operator==(Integer rhs) {
        return this->value == rhs.value;
    }
};

int factorial(int n)
{
    if (Integer(n) <= Integer(1)) {
        return Integer(1).getValue();
    }
    return (Integer(n) * factorial((Integer(n) - Integer(1)).getValue())).getValue();
}
