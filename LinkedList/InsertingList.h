#pragma once
#include "LinkedList.h"

template <class R>
class InsertingList:public linkedListType<R>
{
public:
	void insertFirst(const R&) override;
	void insertLast(const R&) override;
	void deleteNode(const R&) override;
	void search(const R&) override;
};

template<class R>
void InsertingList<R>::insertFirst(const R & n3)
{
	nodeType <R> * n5 = new nodeType<R>;
	n5->info = n3;
	n5->link = this->first;
	first = n5->link;
}

 template<class R>
 void InsertingList<R>::insertLast(const R & n4)
 {
	 nodeType <R> * n6 = new nodeType<R>;
	 n6->info = n4;
	 n6->link = this->last;
	 last = n6->link;
 }
  //make it iterate through to find the one you want to delete
	template<class R>
	void InsertingList<R>::deleteNode(const R &dnode)
	{
		nodeType<Type>* ptr = first;
		nodeType<Type>* tail = ptr;
		while (ptr->info != dnode)
		{
			tail = ptr;
			ptr = ptr->link;
		}
		tail->link = ptr->link;
		delete ptr;
	}
   //Move if ptr.info != dnode
   //	tail = ptr
   //	ptr = ptr.link
   //else
   //	tail.link = ptr.link
   //	delete ptr
   //	return

   template<class R>
   void InsertingList<R>::search(const R &snode)
   {

   }