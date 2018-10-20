#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
    private:
        // data managed by singleton object
        int singleton_data;

        // constructor initializes only single instance
        Singleton();

        // disallow copy constructor
        Singleton(Singleton const &) = delete;

        // disallow assignment of object
        void operator=(Singleton const &) = delete;
    
    public:
        // returns the singleton object
        static Singleton& get_instance();

        // returns data managed by the singleton object
        static int get_singleton_data();

        // performs operation on data managed by singleton object
        static void singleton_operation();
};
#endif