#ifndef LITERA_H
#define LITERA_H
#include <string>

class Litera {
    private:
        char x;
    public:
        // ponizsze deklaracje prosze zdefiniowac w pliku litera.cpp
        Litera(char arg);
        Litera(const Litera& arg);
        Litera& operator=(const Litera& arg);
        ~Litera();

        unsigned Litera_to_ascii() const;

        // prosze pamietac o deklaracji przyjazni wzgl. operatorow
};

#endif