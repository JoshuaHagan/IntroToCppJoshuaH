#pragma once
#include "LinkedList.h"

template <class R>
class InsertingList:linkedListType<R>
{
public:
	void insertFirst(const R&)  override;
	void insertLast(const R&)   override;
	void deleteNode(const R&)  override;
	bool search(const R&) const;
	nodeType<R>*first;
};

template<class R>
 void InsertingList<R>::insertFirst(const R & n3)
{
	 nodeType <R> * n5 = new nodeType<R>;
	 n5->info = n3;	
	 this->first = n5;
	 
}

 template<class R>
  void InsertingList<R>::insertLast(const R & n4)
 {
	  nodeType <R> * n6 = new nodeType<R>;
	  n6->info = n4;
	  this->last->link = n6;
	  this->last = n6;
	  
 }

  template<class R>
  void InsertingList<R>::deleteNode(const R &node)
  {  

	   nodeType<R>* ptr = first;
	   nodeType<R>* tail = ptr;
	   while (ptr->info != node)
	   {
		   tail = ptr;
		   ptr = ptr->link;
	   }
	   tail->link = ptr->link;
	   delete ptr;
  }
  template<class R>
  inline bool InsertingList<R>::search(const R &snode) const
  {
	  nodeType<R>* ptr = first;
	  nodeType<R>* tail = ptr;
	  while (ptr->info != snode)
	  {
		  tail = ptr;
		  ptr = ptr->link;
	  }
	  tail->link = ptr->link;

	  return false;
  }
   //Move if ptr.info != dnode
   //	tail = ptr
   //	ptr = ptr.link
   //else
   //	tail.link = ptr.link
   //	delete ptr
   //	return