#pragma once
#include "DefineList2.h"

template <class R>
class Define3 :Define2<R>
{
	void insertFirst(const Type&) () override;
	void insertLast(const Type&)  () override;
	void deleteNode(const Type&) () override;
};

template<class R>
 void Define3<R>::insertFirst(const Type &)()
{
}

 template<class R>
  void Define3<R>::insertLast(const Type &)()
 {
 }

  template<class R>
   void Define3<R>::deleteNode(const Type &)()
  {
  }
