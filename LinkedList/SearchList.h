#pragma once
#include "CheckList.h"

template <class S>
class SearchList:CheckList<S>
{
	void destroyList() override;
	Type front() override;
	Type back() override;
	bool search(const Type&);
};

template<class S>
 void SearchList<S>::destroyList()
{
}

 template<class S>
  bool SearchList<S>::search(const Type &)
 {
	 return false;
 }
