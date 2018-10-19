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
	 nodeType <R> * n3 = new nodeType<R>;
	 if()
}

 template<class R>
  void InsertingList<R>::insertLast(const R & n4)()
 {
	  nodeType <R> * n4 = new nodeType<R>;
	  if()
 }

  template<class R>
   void InsertingList<R>::deleteNode(const R &)()
  {

  }
