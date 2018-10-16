#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

// Decorator Class
class Decorator : public Component {
    private:
        // composition of Component in Decorator
        Component *ptr_comp;

    public:
        // constructor
        Decorator(Component *ptr_comp) : ptr_comp (ptr_comp) {}
        virtual void operation();
};

// Concrete Decorator Class
class ConcreteDecorator : public Decorator {
    public:
        // constructor
        ConcreteDecorator(Component *ptr_comp) : Decorator(ptr_comp) {}
        virtual void operation();
};

#endif