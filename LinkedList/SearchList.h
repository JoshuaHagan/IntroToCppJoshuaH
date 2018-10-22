#pragma once
#include "CheckList.h"

template <class S>
class SearchList:CheckList<S>
{
	Type front() override;
	Type back() override;
	bool search(const Type&);
};

 template<class S>
  bool SearchList<S>::search(const Type &)
 {
	 return false;
 }
