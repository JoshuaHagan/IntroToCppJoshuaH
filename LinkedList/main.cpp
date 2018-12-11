#include "LinkedList.h"
#include "InsertingList.h"
#include "node.h"
#include "Iterator.h"

int main()
{
	/*nodeType<int>*n1 = new nodeType<int>;
	nodeType<int>*n2 = new nodeType<int>;
	n1->info = 2;
	n2->info = 3;
	n1->link = n2;
	n2->link = nullptr;
	linkedListIterator<int> iterate (n1);
	++iterate;
	int why = *iterate;*/
	InsertingList<int>* list = new InsertingList<int>;
	
	nodeType<int>* n1 = new nodeType<int>{ 2 };
	nodeType<int>* n2 = new nodeType<int>{ 4 };
	nodeType<int>* n3 = new nodeType<int>{ 8 };
	nodeType<int>* n4 = new nodeType<int>{ 12 };


	list->insertFirst(n1->info);
	list->insertLast(n2->info);
	list->insertFirst(n4->info);

	InsertingList<int>* list2 = new InsertingList<int>;
	list2 = list;
	list->print(); 
	list->destroyList();
	list->print();
	
	




	system("pause");
}