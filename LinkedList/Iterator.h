#pragma once
#include "node.h"

template <class Type>
class linkedListIterator
{
private:
	nodeType<Type>*current;
	nodeType<Type>*n1;
	nodeType<Type>*n2;
public:
	linkedListIterator();
	linkedListIterator(nodeType<Type>*);
	Type operator *();
	linkedListIterator<Type> operator++ ();
	bool operator == (const linkedListIterator<Type>&) const;
	bool operator != (const linkedListIterator<Type>&) const;	
};

template<class Type>
linkedListIterator<Type>::linkedListIterator()
{
	current = nullptr;
}

template<class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type>*Node)
{
	current = Node;
}

template<class Type>
Type linkedListIterator<Type>::operator*()
{
	return current->info;
}

template<class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
	current = current->link;
	return *this;
}

template<class Type>
bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>&that) const
{
	return current == that.current;
}

template<class Type>
bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&dot) const
{
	return current != dot.current;
}