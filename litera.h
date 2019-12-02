#ifndef LITERA_H
#define LITERA_H
#include <string>

class Litera {
    private:
        char x;
        std::size_t len = 0;
    public:
        // ponizsze deklaracje prosze zdefiniowac w pliku litera.cpp
        Litera(char arg);
        Litera(const Litera& arg);
        Litera& operator=(const Litera& arg);
        ~Litera();
        friend std::ostream& operator<<(std::ostream& str, const Litera& arg);
        friend std::ostream& operator>>(std::ostream& str, const Litera& arg);
        unsigned Litera_to_ascii() const;

        // prosze pamietac o deklaracji przyjazni wzgl. operatorow
};

#endif