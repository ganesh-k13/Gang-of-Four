#ifndef ADAPTER_H
#define ADAPTER_H

class Adaptee;

// Target Class - has interface 1
class Target {
    public:
        virtual void request() = 0;
};

// Adapter Class - matches the interfaces
class Adapter : public Target {
    private:
        Adaptee *adaptee;
    public:
        Adapter (Adaptee *adaptee) : adaptee(adaptee) {}
        virtual void request();
};

// has new interface
class Adaptee {
    public:
        virtual void specific_request();
};
#endif