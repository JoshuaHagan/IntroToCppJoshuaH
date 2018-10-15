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
	 linkedListType();
	 linkedListType(const linkedListType<Type>&);
	 ~linkedListType();
private:
	virtual void copyList(const linkedListType<Type>&);
};

template<class Type>
 const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type>&)
{
	// TODO: insert return statement here

}

template<class Type>
 void linkedListType<Type>::initializeList()
{
	 
}

template<class Type>
 bool linkedListType<Type>::isEmptyList() const
{
	 count == 0;
	return false;
}

template<class Type>
 void linkedListType<Type>::print() const
{

}

template<class Type>
 int linkedListType<Type>::length() const
{
	return 0;
}

template<class Type>
 void linkedListType<Type>::destroyList()
{
	 count--;
}

template<class Type>
 Type linkedListType<Type>::front() const
{
	return ;
}

template<class Type>
 Type linkedListType<Type>::back() const
{
	return Type();
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

template<class Type>
 linkedListType<Type>::linkedListType()
{
}

template<class Type>
 linkedListType<Type>::linkedListType(const linkedListType<Type>&)
{
}

template<class Type>
 linkedListType<Type>::~linkedListType()
{
}
