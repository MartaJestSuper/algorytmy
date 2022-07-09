
#include <iostream>
#include "Vector.hpp"

Vector::Vector()
	:_size(0)
	, _capacity(0)
	,_data(nullptr)
{
}

Vector::Vector(unsigned int capacity)
	:_size(0)
	,_capacity(capacity)
{
	_data = new int[_capacity];
}

Vector::Vector(const Vector& old)
{
	_capacity = old._capacity;
	_size = old._size;
	_data = new int[_capacity];
	for (unsigned int i = 0; i < old._size; ++i)
	{
		_data[i] = old._data[i];
	}

}

Vector::~Vector()
{
	if (_data != nullptr)
	{
		delete[] _data;
		_data = nullptr;
	}
}

void Vector::reserve(unsigned int capacity)
{
	int* data = new int[capacity];
	for (int i = 0; i < _size; ++i)
	{
		data[i] = _data[i];
	}
	_capacity = capacity;
	delete[]_data;
	_data = data;
}

unsigned int Vector::capacity() const
{
	return _capacity;
}

unsigned int Vector::size() const
{
	return _size;
}

bool Vector::empty() const
{
	return _size == 0;
}

void Vector::insert(int value, unsigned int position)
{
	if (_size >= _capacity)
	{
		reserve((_capacity + 1) * 2);
	}
	for (unsigned int i = _size - 1; i >= position, --i)
	{
		_data[i] = _data[i-1];
	}
	_data[position-1] = value;
	++_size;
}

void Vector::remove(unsigned intposition)
{
	if (index > _size)
	{

	}
	for (unsigned int i = index; i< _size; ++i)
	{
		_data[i] = _data[i + 1];
	}
	--_size;
}

void Vector::clear()
{
	_size = 0;
}

void Vector::push_back(int& value)
{
	if (_size >= _capacity)
	{
		reserve((_capacity + 1) * 2);
	}
	_data[_size++] = value;
	
}

int& Vector::operator[](unsigned int position)
{
	if (position > _size)
	{
		
	}
	//if (_data != nullptr)
	//{
	//
	//}
	return _data[position];
}

Vector& Vector::operator=(const Vector& other)
{
		delete[] _data;
		_capacity = other._capacity;
		_size = other._size;
	
	_data = new int[_capacity];
	for (unsigned int i = 0; i < other._size; ++i)
	{
		_data[i] = other._data[i];
	}
	return *this;
}
	
