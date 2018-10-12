#include <string>
#include <iostream>
#include "state.h"

#ifndef MOBILE_H
#define MOBILE_H

// class State;

class Mobile {
	private:
		State *_ptr_state;
		std::string _name;
	public:
		void alert() ;
		void change_state(State *ptr_state) {
			_ptr_state = ptr_state;
		}
		Mobile(std::string name);
		~Mobile();
};


#endif

