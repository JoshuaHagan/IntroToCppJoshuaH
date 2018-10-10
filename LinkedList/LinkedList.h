#pragma once
#include "Iterator.h"

template <class Type>
class linkedListType
{
protected:
	int count;
	nodeType<Type>* first;
	nodeType<Type>* last;

public:
	const linkedListType<Type>& operator = (const linkedListType<Type>&);
	void initializeList();
	//Keeps it own variables from being modified.
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList();
	Type front() const;
	Type back() const;
	bool search(const Type&) const = 0;
	virtual void insertFirst(const Type&) = 0;
	virtual void insertLast(const Type&) = 0;
	virtual void deleteNode(const Type&) = 0;
	linkedListIterator<Type> begin();
	linkedListIterator<Type> end();
	linkedListType();
	linkedListType(const linkedListType<Type>&);
	~linkedListType();
private:
	void copyList(const linkedListType<Type>&);
};

template<class Type>
void linkedListType<Type>::initializeList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}
 template<class Type>
 bool linkedListType<Type>::isEmptyList() const
 {
	 return false;
 }

 template<class Type>
 int linkedListType<Type>::length() const
 {
	 return 0;
 }

 template<class Type>
 linkedListIterator<Type> linkedListType<Type>::begin()
 {
	 return linkedListIterator<Type>();
 }

 template<class Type>
 linkedListIterator<Type> linkedListType<Type>::end()
 {
	 return linkedListIterator<Type>();
 }
