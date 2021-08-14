#include "Singleton.h"

int main(){

    // Creates a reference to the Singleton class.
    Singleton& instance = Singleton::Get();

    // Accessing the function within the singleton class.
    instance.classFunc1();

    instance.classFunc2(2, 4);

    return 0;
}