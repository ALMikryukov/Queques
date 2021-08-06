#pragma once
#include "Queque.h"
#include"QueIsEpty.h"
using namespace step;
template<typename T,int size>
class RingBufer : public Queque<T>
{
	T buffer[size];
	int begin = 0;
	int end = 0;
	bool empty;
public:
	void push(T e) {
		buffer[end] = e;
		if (!isEmpty()&&  end == begin) {
			begin= (begin+1)%size;
		}
		end = (end + 1) % size;
		empty = false;	
	}
	T pop() {
		if (isEmpty()) {
			throw QueIsEpty("Try to pop from  empty queque!");
        }
		T tmp = buffer[begin];
		begin = (begin + 1) % size;
		if (begin == end) {
			empty = true;
		}
		return tmp;

	}
	bool isEmpty() const {
		return empty;
	}
	 
	/*int getSize() const {//бесполезный метод  создан только лишь для примера приобразования типов
		return size;
	}*/


	
};

