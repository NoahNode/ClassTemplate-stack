#pragma once
#include <deque>

template<typename T>
class Stack {
public:
	const T& Top() {
		return stack.front();
	}

	void Push(const T& pushValue) {
		stack.push_front(pushValue);
	}

	void Pop() {
		stack.pop_front();
	}

	bool IsEmpty() const {
		return stack.empty();
	}

	size_t Size() const {
		return stack.size();
	}

private:
	std::deque<T> stack;

};