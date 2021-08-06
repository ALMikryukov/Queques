#pragma once
namespace step {
	template<typename T>
	class Queque
	{
	public:
		virtual void push(T e) = 0;
		virtual T pop() = 0;
		virtual bool isEmpty() const = 0;
		virtual ~Queque() {};


	};
}