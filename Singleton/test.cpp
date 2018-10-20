#include <iostream>
using namespace std;

#include "include/singleton.h"

int main() {
    cout << endl << "------ Singleton Pattern Tests ------" << endl;

    Singleton *s_ptr1 = &Singleton::get_instance();
    Singleton *s_ptr2 = &Singleton::get_instance();

    // before calling operation -  both pointers store same data
    cout << s_ptr1->get_singleton_data() << endl;
    cout << s_ptr2->get_singleton_data() << endl;

    // if one pointer calls the operation, the other is also updated
    s_ptr1->singleton_operation();
    cout << s_ptr1->get_singleton_data() << endl;
    cout << s_ptr2->get_singleton_data() << endl;

    s_ptr2->singleton_operation();
    cout << s_ptr1->get_singleton_data() << endl;
    cout << s_ptr2->get_singleton_data() << endl;
   
    return 0;
}