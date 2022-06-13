#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H


class Singleton {
private:
    static Singleton* _self;
    int _number;
    Singleton() {}

public:
    static Singleton* Instance() {
        if(!_self)
        {
            _self = new Singleton();
        }
        return _self;
    }

    int GetNumber() {
        return _self->_number;
    }

    void SetNumber(int number) {
        _self->_number = number;
    }
};

Singleton* Singleton::_self = nullptr;

#endif //SINGLETON_SINGLETON_H
