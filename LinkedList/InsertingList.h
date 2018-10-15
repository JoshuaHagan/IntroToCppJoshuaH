#pragma once
#include "SearchList.h"

template <class R>
class InsertingList:SearchList<R>
{
	void insertFirst(const Type&) () override;
	void insertLast(const Type&)  () override;
	void deleteNode(const Type&) () override;
};

template<class R>
 void InsertingList<R>::insertFirst(const Type &)()
{
}

 template<class R>
  void InsertingList<R>::insertLast(const Type &)()
 {
 }

  template<class R>
   void InsertingList<R>::deleteNode(const Type &)()
  {
  }
