#pragma once
class DoublyLinkedList
{
public:
	DoublyLinkedList();
	virtual ~DoublyLinkedList();
	

	unsigned int size() const;
	bool empty() const;
	void print() const;

	void insertFront(int value);
	void insertBack(int value);
	void insert(int value, const unsigned int position);

	void removeValue(int value);
	void remove(const unsigned int position);
	void clear();

	int& operator[](const unsigned int index) const;

	//praca domowa:
	//operator=

private:
	struct Node
	{
		int data;
		Node* next;
		Node* prev;
	};
	Node* _head;
	Node* _tail;

	DoublyLinkedList(const DoublyLinkedList& other);
	DoublyLinkedList& operator=(DoublyLinkedList)
};