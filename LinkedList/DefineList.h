#pragma once
#include "LinkedList.h"

template <class M>
class Define:linkedListType<M>
{
	bool isEmptyList() override;
	void print() override;
	int length() override;
	void destroyList() override;
};
template<class M>
 bool Define<M>::isEmptyList()
{
	return false;
}

 template<class M>
  void Define<M>::print()
 {
 }

  template<class M>
   int Define<M>::length()
  {
	  return 0;
  }

   template<class M>
    void Define<M>::destroyList()
   {
   }
