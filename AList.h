//*****************************************************************************************************
//
//		File:					driverAList.h
//
//		Student:				Spencer Verharst
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-Z1
//
//
//		This program sets up the Alist class as a template.
//	
//		Other files required: 
//			1.	driverAList.cpp
//			
//*****************************************************************************************************

#ifndef ALIST_H
#define ALIST_H
#include <new>

//*****************************************************************************************************

template <typename TYPE>
class AList
{
	private:
		TYPE* list;
		int capacity;
		int numValues;

		bool _resize();
	public:
		AList(int cap = 5);
		~AList();

		bool insertFront(const TYPE& dataIn);
		bool insertBack(const TYPE& dataIn);
		bool insertAtIndex(const TYPE& dataIn, int index);

		bool retrieveFront(TYPE& dataOut) const;
		bool retrieveBack(TYPE& dataOut) const;
		bool retrieveAtIndex(TYPE& dataOut, int index) const;

		bool removeFront(TYPE& dataOut);
		bool removeBack(TYPE& dataOut);
		bool removeAtIndex(TYPE& dataOut, int index);
		bool remove(TYPE& dataIO);

		bool updateFront(const TYPE& dataIn);
		bool updateBack(const TYPE& dataIn);

		bool display() const;
		bool getSmallest(TYPE& dataOut) const;
		int getCapacity() const;
		int getNumValues() const;
		bool isEmpty() const;
		bool isFull() const;
		bool clearList();
};

//*****************************************************************************************************

template <typename TYPE>
AList<TYPE>::AList(int cap)
{
	if (cap < 2)
	{
		cap = 2;
	}

	capacity = cap;
	numValues = 0;
	list = new TYPE[capacity];
}

//*****************************************************************************************************

template <typename TYPE>
AList<TYPE>::~AList()
{
	delete[] list;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::_resize()
{
	bool success = false;

	TYPE* newList;
	int newCap;

	newCap = capacity * 1.5;
	newList = new(nothrow) TYPE[newCap];

	if (newList)
	{
		for (int i = 0; i < numValues; i++)
		{
			newList[i] = list[i];
		}

		capacity = newCap;

		delete[] list;

		list = newList;

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::insertFront(const TYPE& dataIn)
{
	bool sucess = true;

	if (numValues == capacity)
	{
		sucess = _resize();
	}

	if (sucess)
	{
		for (int i = numValues; i > 0; i--)
		{
			list[i] = list[i - 1];
		}

		list[0] = dataIn;
		numValues++;
	}

	return sucess;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::insertBack(const TYPE& dataIn)
{
	bool success = true;

	if (numValues == capacity)
	{
		success = _resize();
	}

	if (success)
	{
		list[numValues] = dataIn;

		numValues++;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::insertAtIndex(const TYPE& dataIn, int index)
{
	bool success = false;

	if (index <= numValues && index >= 0)
	{
		success = true;

		if (capacity == numValues)
		{
			success = _resize();
		}

		if (success)
		{
			for(int i = numValues; i > index; i--)
			{
				list[i] = list[i - 1];
			}

			list[index] = dataIn;

			numValues++;
		}
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::retrieveFront(TYPE& dataOut) const
{
	bool sucess = false;

	if (numValues > 0)
	{
		sucess = true;

		dataOut = list[0];
	}

	return sucess;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::retrieveBack(TYPE& dataOut) const
{
	bool sucess = false;

	if (numValues > 0)
	{
		dataOut = list[numValues - 1];

		sucess = true;
	}

	return sucess;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::retrieveAtIndex(TYPE& dataOut, int index) const
{
	bool success = false;

	if (numValues > 0)
	{
		dataOut = list[index];

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::removeFront(TYPE& dataOut)
{
	bool success = false;

	if (numValues > 0)
	{
		dataOut = list[0];

		for (int i = 0; i < numValues; i++)
		{
			list[i] = list[i + 1];
		}

		numValues--;

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::removeBack(TYPE& dataOut)
{
	bool sucess = false;

	if (numValues > 0)
	{
		dataOut = list[numValues - 1];

		numValues--;

		sucess = true;
	}

	return sucess;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::removeAtIndex(TYPE& dataOut, int index)
{
	bool success = false;

	if (index <= numValues && index > 0)
	{
		success = true;

		dataOut = list[index];

		if (success)
		{
			for (int i = index; i < numValues; i++) 
			{
				list[i] = list[i + 1];
			}

			numValues--;
		}
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::remove(TYPE& dataIO)
{
	bool success = false;

	if (numValues > 0)
	{
		for (int i = 0; i < numValues; i++)
		{
			if (list[i] == dataIO)
			{
				success = true;

				list[dataIO] = dataIO;

				for (int j = i; j < numValues; j++)
				{
					list[j] = list[j + 1];
				}

				numValues--;
			}
		}
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::updateFront(const TYPE& dataIn)
{
	bool success = false;

	if (numValues > 0)
	{
		list[0] = dataIn;

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::updateBack(const TYPE& dataIn)
{
	bool success = false;

	if (numValues > 0)
	{
		list[numValues - 1] = dataIn;

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::display() const
{
	bool success = false;

	if (numValues > 0)
	{
		success = true;

		for (int i = 0; i < numValues; i++)
		{
			cout << "[" << i << "] " << list[i] << "\t";
		}
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::getSmallest(TYPE& dataOut) const
{
	bool success = false;

	TYPE smallest = list[0];

	if (numValues > 0)
	{
		for (int i = 1; i < numValues; i++)
		{
			if (smallest > list[i])
			{
				smallest = list[i];
			}
		}

		dataOut = smallest;

		success = true;
	}

	return success;
}

//*****************************************************************************************************

template <typename TYPE>
int AList<TYPE>::getCapacity() const
{
	return capacity;
}

//*****************************************************************************************************

template <typename TYPE>
int AList<TYPE>::getNumValues() const
{
	return numValues;
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::isEmpty() const
{
	return (numValues == 0);
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::isFull() const
{
	return (numValues == capacity);
}

//*****************************************************************************************************

template <typename TYPE>
bool AList<TYPE>::clearList()
{
	numValues = 0;
	
	return true;
}

//*****************************************************************************************************

#endif
