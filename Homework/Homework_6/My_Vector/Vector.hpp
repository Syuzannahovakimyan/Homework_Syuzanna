#pragma once

#include<stdexcept>
#include <iostream>

template<typename T>
class Vector {
public:
	Vector();
	Vector(const Vector& other);
	Vector(Vector&& other);
	Vector& operator=(const Vector& other);
	Vector& operator=(Vector&& other);
	~Vector();

	T& operator[](size_t index);
	const T& operator[](size_t index) const;

	void push_back(const T& elem);
	void pop_back();

	void insert(size_t position, const T& value);
	void remove(size_t position);

	void clear();

	template <typename Out>
	void print(const Out& out) const;

	size_t get_size() const;

private:
	size_t m_capacity = 0;
	size_t m_size = 0;
	T* m_arr = nullptr;
};

#include "Vector.inl"




