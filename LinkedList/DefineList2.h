#pragma once
#include "DefineList.h"

template <class S>
class Define2 :Define<S>
{
	void destroyList() override;
	Type front() override;
	Type back() override;
	bool search(const Type&);
};

template<class S>
 void Define2<S>::destroyList()
{
}

 template<class S>
  bool Define2<S>::search(const Type &)
 {
	 return false;
 }
