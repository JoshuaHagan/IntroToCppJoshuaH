#pragma once
#include "LinkedList.h"

template <class R>
class InsertingList: public linkedListType<R>
{
public:
	void insertFirst(const R&)  override;
	void insertLast(const R&)   override;
	void deleteNode(const R&)  override;
	bool search(const R&) const;
};

template<class R>
 void InsertingList<R>::insertFirst(const R & newvalue)
{
	 nodeType <R> * temp = new nodeType<R>;
	 temp->info = newvalue;
	 if (this->isEmptyList())
	 {
		 this->first = temp;
		 this->last = temp;
	 }
	 else
	 {
		 temp->link = this->first;
		 this->first = temp;
	 }
	 this->count++;
	 
}

 template<class R>
  void InsertingList<R>::insertLast(const R & newvalue)
 {
	  nodeType <R> * temp = new nodeType<R>;
	  temp->info = newvalue;
	  if (this->isEmptyList())
	  {
		  this->first = temp;
		  this->last = temp;
	  }
	  else
	  {
		  this->last->link = temp;
		  this->last = this->last->link;
	  }
	 this->count++;
		
	  
 }

  template<class R>
  void InsertingList<R>::deleteNode(const R &node)
  {  

	   nodeType<R>* ptr = this->first;
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
	  nodeType<R>* ptr = this->first;
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