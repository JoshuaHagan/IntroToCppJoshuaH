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
	 bool isEmptyList() const;
	void print() const;
	 int length() const;
	 void destroyList();
	 Type front() const;
	 Type back() const;
	virtual bool search(const Type&) const = 0;
	virtual void insertFirst(const Type&) = 0;
	virtual void insertLast(const Type&) = 0;
	virtual void deleteNode(const Type&) = 0;
	 linkedListIterator<Type> begin();
	 linkedListIterator<Type> end();
	 linkedListType();
	 linkedListType(const linkedListType<Type>&);
	 ~linkedListType();
private:
	virtual void copyList(const linkedListType<Type>&);
};

template<class Type>
const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type>&cnode)
{
	// TODO: insert return statement here
	return *this;
}

template<class Type>
void linkedListType<Type>::initializeList()
{
	count = 0;
	first = nullptr;
	last = nullptr;

}

template<class Type>
bool linkedListType<Type>::isEmptyList() const
{
	return (count == 0);
}

template<class Type>
void linkedListType<Type>::print() const
{
	nodeType<Type>* List = this->first;
	for (int i = 0; i < count; i++)
	{
		std::cout << List->info << std::endl;
		List = List->link;
	}
	 
}

template<class Type>
int linkedListType<Type>::length() const
{
	return 0;
}

template<class Type>
void linkedListType<Type>::destroyList()
{
	nodeType<Type>* deletenode->first;
	
	count--;
}

template<class Type>
Type linkedListType<Type>::front() const
{
	return n1->info;
}

template<class Type>
Type linkedListType<Type>::back() const
{
	return n2->info;
}

template<class Type>
linkedListIterator<Type> linkedListType<Type>::begin()
{
	return linkedListIterator<Type>(current->first);
}

template<class Type>
linkedListIterator<Type> linkedListType<Type>::end()
{
	return linkedListIterator<Type>(current->last);
}

template<class Type>
linkedListType<Type>::linkedListType()
{
	initializeList();
}

template<class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>&copy)
{
	List = copy->List;
}

template<class Type>
linkedListType<Type>::~linkedListType()
{
	initializeList();
}

 template<class Type>
 void linkedListType<Type>::copyList(const linkedListType<Type>&copy)
 {
	  nodeType<Type>* point = (copy.first);
	 point = copy.first ;
	 for (int i = 0; i < count; i++)
	 {
		 this->first = point;
	 }
 }
