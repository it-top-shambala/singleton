#ifndef SINGLETON_SINGLE_H
#define SINGLETON_SINGLE_H

class Single {
private:
    static int _number;
public:
    static int getNumber() {
        return _number;
    }

    static void setNumber(int number) {
        _number = number;
    }
};

int Single::_number = 0;


#endif //SINGLETON_SINGLE_H
