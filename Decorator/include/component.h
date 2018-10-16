#ifndef COMPONENT_H
#define COMPONENT_H

// Interface Class
class Component {
    public:
        virtual void operation() = 0;
};

// Basic Implementation Class
class ConcreteComponent : public Component {
    public:
        virtual void operation();
};

#endif