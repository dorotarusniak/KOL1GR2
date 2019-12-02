#include "litera.h"

using namespace std;

// tu napisac definicje operatorow deklarowanych w operatory.h

std::ostream& operator<<(std::ostream& str, const Litera& a) {
    return str << (a.ptr ? a.ptr : "pusty");
}

std::istream& operator>>(std::istream& str, Litera& a) {
    string tmp;
    getline(str,tmp);
    delete [] a.ptr; 
    a.len = tmp.size();
    if (a.len > 0) {
        a.ptr = new char[a.len+1];
        strcpy(a.ptr,tmp.c_str()); 
    } else {
        a.ptr = nullptr;
    }
    return str;
}
bool Litera :: operator>(const Litera& a, const Litera& b){
return ( (x = a.x) && (y = b.x );

}
bool Litera :: operator<(const Litera& a, const Litera& b){
return ( (x = a.x) && (y = b.x );
}