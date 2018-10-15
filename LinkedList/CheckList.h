#pragma once
#include "LinkedList.h"

template <class M>
class CheckList:linkedListType<M>
{
	bool isEmptyList() override;
	void print() override;
	int length() override;
	void destroyList() override;
};
template<class M>
 bool CheckList<M>::isEmptyList()
{
	return false;
}

 template<class M>
  void CheckList<M>::print()
 {
 }

  template<class M>
   int CheckList<M>::length()
  {
	  return 0;
  }

   template<class M>
    void CheckList<M>::destroyList()
   {
   }
