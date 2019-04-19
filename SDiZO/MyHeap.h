#include <iostream>


class MyHeap
{
public:
	MyHeap();
	void add(int);
	int getIndex(int);
	int getSize();
	int getLength();
	static void printToConsole(MyHeap*);
	void del(int);
	void correctionDown(int);
	void correctHeap();
	void correctionAdd();

	~MyHeap();

private:
	int* array;
	int size;
	int length;
};
