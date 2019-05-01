#ifndef STACKLIB_H
#define STACKLIB_H

template <class DT>
class stack
{
	DT *arr;
	int size;
	int top;
public:
	stack(int);

	void push(DT);
	DT pop();
	DT getTop();
	bool isEmpty();
	bool isFull();

};


template <class DT>
stack<DT>::stack(int size)
{

	this->size = size;
	arr = new DT[size];
	top = -1;
}

template <class DT>
void stack<DT>::push(DT data)
{
	if (!this->isFull())
	{
		top++;
		arr[top] = data;
	}
	else
		cout << "\nStack is Full\n";
}


template <class DT>
DT stack<DT>::pop()
{
	if (!this->isEmpty())
	{
		DT tempVal = arr[top];
		top--;

		return tempVal;
	}
	else
	{
		return -1;
	}
}



template <class DT>
bool stack<DT>::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

template <class DT>
bool stack<DT>::isFull()
{
	if (top == size - 1)
	{
		return 1;
	}
	else
		return 0;
}

template <class DT>
DT stack<DT>::getTop()
{
	if (this->isEmpty())
	{
		return -1;
	}
	else
	{
		return arr[top];
	}
}

#endif