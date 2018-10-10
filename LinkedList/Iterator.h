#pragma once
#include "node.h"

template <class Type>
class linkedListIterator
{
private:
	nodeType<Type>*current;
public:
	linkedListIterator();
	linkedListIterator(nodeType<Type>);
	Type operator *();
	linkedListIterator<Type> operator++ ();
	bool operator == (const linkedListIterator<Type>&) const;
	bool operator != (const linkedListIterator<Type>&) const;	
};
