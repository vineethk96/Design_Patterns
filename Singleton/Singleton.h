#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton{

    public: 

        // Delete Copy Constructor, so no extra instances of the Singleton class can be made.
        Singleton(const Singleton&) = delete;

        // This function will access the class, thereby removing the ability for this class from being initialized anywhere else.
        static Singleton& Get(){

            // s_Instance is created within static memory upon first call. Each time this function is called, this instance can access the members.
            static Singleton s_Instance;
            return s_Instance;
        }

        // Helper function within the class to get a variable to complete an action associated with the class.
        void classFunc1(){
            std::cout << "This is Singleton Func 1" << std::endl;
        };

        void classFunc2(int a, int b){
            member1 += a;
            member2 += b;

            std::cout << "Singleton func 2: " << member1 << ", " << member2 << std::endl;

        };

        int member1 = 5;
        int member2 = 10;

    private:
        // Make the constructor private, this prevents any outside code from creating another instance of this class.
        Singleton(){};

};

#endif