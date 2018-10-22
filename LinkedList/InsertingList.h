#pragma once
#include "SearchList.h"

template <class R>
class InsertingList:SearchList<R>
{
	void insertFirst(const R&) () override;
	void insertLast(const R&)  () override;
	void deleteNode(const R&) () override;
};

template<class R>
 void InsertingList<R>::insertFirst(const R & n3)()
{
	 nodeType <R> * n5 = new nodeType<R>;
	 n5->info = R;	
	 n5->link = first;
}

 template<class R>
  void InsertingList<R>::insertLast(const R & n4)()
 {
	  nodeType <R> * n6 = new nodeType<R>;
	  n6->info = R;
	  n6->link = last;
 }

  template<class R>
   void InsertingList<R>::deleteNode(const R &)()
  {
	   node = *n7;
	   node = *n8;
	   n7->first; 
  }
