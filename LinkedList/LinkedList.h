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
	virtual const linkedListType<Type>& operator = (const linkedListType<Type>&);
	void initializeList();
	//Keeps it own variables from being modified.
	virtual bool isEmptyList() const;
	virtual void print() const;
	virtual int length() const;
	virtual void destroyList();
	virtual Type front() const;
	virtual Type back() const;
	virtual bool search(const Type&) const = 0;
	virtual void insertFirst(const Type&) = 0;
	virtual void insertLast(const Type&) = 0;
	virtual void deleteNode(const Type&) = 0;
	virtual linkedListIterator<Type> begin();
	virtual linkedListIterator<Type> end();
	virtual linkedListType();
	virtual linkedListType(const linkedListType<Type>&);
	virtual ~linkedListType();
private:
	virtual void copyList(const linkedListType<Type>&);
};