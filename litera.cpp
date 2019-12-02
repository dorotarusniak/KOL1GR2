#include "litera.h"
#include <iostream>

using namespace std;
Litera::Litera(Litera char arg){
    
}

Litera::Litera(const char* arg) {
    if ( arg != nullptr ) {
        len = strlen(s);
        ptr = new char[len+1]; 
        strcpy(ptr,arg);
    }

Litera::Litera(const Litera& arg) : len(arg.len){
    if (len>0){
        ptr = new char[len+1];
        strcpy(ptr,arg.ptr);
    }
}
Litera& Litera::operator=(const Litera& arg){
    if (this != &arg)
    delete [] ptr;
    ptr = nullptr;
    len = arg.len
    if (len>0){
        ptr = new char[len+1];
        strcpy(ptr, arg.ptr);

    }
}
Litera::~Litera() {
    #ifdef DEBUG
        cout << "Litera d-tor " << len << " - " << (ptr?ptr:"pusty") << endl;
    #endif
    delete [] ptr;


// tu prosze zdefiniowac wszystkie skladowe zadeklarowane w klasie Litera