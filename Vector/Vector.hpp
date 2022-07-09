#pragma once

class Vector
{
public:

	Vector();
	Vector(unsigned int capacity);
	Vector(const Vector& old);
	virtual ~Vector();

	void reserve(unsigned int capacity);
	void resize(unsigned int size);

	unsigned int capacity() const;
	unsigned int size() const;
	bool empty() const;

	void insert(int value, unsigned int position);
	void remove(unsigned intposition);
    void clear();
	void push_back(const int& value);

	int& operator[](unsigned int position);
	Vector& operator=(const Vector& other);

private:
	unsigned int _size; //wektor ma rozmiar i pojemnosc
	unsigned int _capacity;
	int* _data;

};