//*****************************************************************************************************
//
//		File:					driverAList.cpp
//
//		Student:				Spencer Verharst
//
//		Assignment:				Program #04
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-Z1
//
//		Due:					Thursday, September 25th
//
//
//		This program is the driver file for the AList class.
//	
//		Other files required: 
//			1.	Alist.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "AList.h"

//*****************************************************************************************************

int main()
{
	short min, 
		value;

	AList<short> shortList(3);
	AList<short> shortList2(1);
	AList<short> shortListResize(3);

	cout << "Testing the capacity automatically being set to 2... " << endl;

	shortList2.clearList();
	if (shortList2.insertFront(9))
	{
		shortList2.display();
		shortList2.getSmallest(min);
		cout << endl << "Capacity is " << shortList2.getCapacity() << "\t numValues is "
			<< shortList2.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value 9";
	}

	cout << endl << "Insert testing..." << endl;

	cout << endl << "Testing Front..." << endl;

	shortList.clearList();
	if (shortList.insertFront(3))
	{
		shortList.insertFront(34);

		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value 3";
	}
	
	shortList.clearList();
	if (shortList.insertFront(3))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value 3";
	}
	
	shortListResize.clearList();
	if (shortListResize.insertFront(3))
	{
		shortListResize.insertBack(8);
		shortListResize.insertFront(2);
		shortListResize.insertBack(7);
		
		shortListResize.display();
		shortListResize.getSmallest(min);
		cout << endl << "Capacity is " << shortListResize.getCapacity() << "\t numValues is "
			<< shortListResize.getNumValues() << "\t the smallest values is " << min << endl
			<< "the list is full: " << shortListResize.isFull() << endl;
	}
	else
	{
		cout << "unable to insert the value 3";
	}

	cout << endl << "Testing Back..." << endl;

	shortList.clearList();
	if (shortList.insertBack(5))
	{
		shortList.insertFront(15);

		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value 5 to the back";
	}

	shortList.clearList();
	if (shortList.insertBack(5))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value 5, list is empty: "
			<< shortList.isEmpty() << endl;;
	}

	shortListResize.clearList();
	if (shortListResize.insertBack(12))
	{
		shortListResize.insertFront(8);
		shortListResize.insertFront(2);
		shortListResize.insertFront(7);
		
		shortListResize.display();
		shortListResize.getSmallest(min);
		cout << endl << "Capacity is " << shortListResize.getCapacity() << "\t numValues is "
			<< shortListResize.getNumValues() << "\t the smallest values is " << min << endl
			<< "The list is full: " << shortListResize.isFull() << endl;
	}
	else
	{
		cout << "unable to insert the value 5";
	}
	
	cout << endl << "Testing Index...";

	shortList.clearList();
	if (shortList.insertAtIndex(4, 1))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << endl << "unable to insert the value at the index, list is empty: "
			<< shortList.isEmpty() << endl;
	}
	
	shortList.clearList();
	if (shortList.insertAtIndex(4, 0))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value at the index, list is empty: "
			<< shortList.isEmpty() << endl;
	}
	
	shortList.clearList();
	shortList.insertFront(38);
	shortList.insertBack(49);
	shortList.insertFront(7);
	if (shortList.insertAtIndex(4, 10))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value at the index 10, index is greater than capacity " 
			<< "capacity is only: " << shortList.getCapacity() << endl;
	}


	shortListResize.clearList();
	shortListResize.insertFront(6);
	shortListResize.insertFront(7);
	shortListResize.insertBack(90);
	if (shortListResize.insertAtIndex(4, 2))
	{
		shortListResize.display();
		shortListResize.getSmallest(min);
		cout << endl << "Capacity is " << shortListResize.getCapacity() << "\t numValues is "
			<< shortListResize.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value at the index. ";
	}

	shortList.clearList();
	shortList.insertFront(6);
	if (shortList.insertAtIndex(4, 0))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "unable to insert the value at the index. ";
	}

	cout << endl << "Retrieve Functions Testing..." << endl << endl;

	cout << "Testing Front..." << endl;
	
	shortList.clearList();
	shortList.insertFront(6);
	shortList.insertBack(90);
	if (shortList.retrieveFront(value))
	{
		shortList.display();

		cout << endl << "The value at the front is " << value << endl;
	}
	else
	{
		cout << "unable to retrieve the value at the front";
	}

	shortList.clearList();
	if (shortList.retrieveFront(value))
	{
		shortList.display();

		cout << endl << "The value at the front is " << value << endl;
	}
	else
	{
		cout << "unable to retrieve the value at the front, list is empty: "
			<< shortList.isEmpty() << endl;
	}

	cout << endl << "Testing Back..." << endl;
	
	shortList.clearList();
	shortList.insertFront(88);
	shortList.insertBack(99);
	if (shortList.retrieveBack(value))
	{
		shortList.display();

		cout << endl << "The value at the back is " << value << endl;
	}
	else
	{
		cout << "unable to retrieve the value at the back";
	}

	shortList.clearList();
	if (shortList.retrieveBack(value))
	{
		shortList.display();

		cout << endl << "The value at the back is " << value << endl;
	}
	else
	{
		cout << "unable to retrieve the value at the back, the list is empty: "
			<< shortList.isEmpty() << endl;
	}

	cout << endl << "Testing index..." << endl;
	
	shortList.clearList();
	shortList.insertFront(6);
	shortList.insertBack(77);
	if (shortList.retrieveAtIndex(value, 1))
	{
		shortList.display();

		cout << endl << "The value at the index 1 is " << value;
	}
	else
	{
		cout << "unable to retrieve the value at the index";
	}

	shortList.clearList();
	if (shortList.retrieveAtIndex(value, 1))
	{
		shortList.display();

		cout << endl << "The value at the index 1 is " << value << endl << endl;
	}
	else
	{
		cout << endl << "unable to retrieve the value at the index 1, list is empty: "
			<< shortList.isEmpty() << endl << endl;
	}

	cout << "Remove Functions Testing..." << endl << endl;
	
	cout << "Testing Front..." << endl;

	shortList.clearList();
	shortList.insertFront(44);
	shortList.insertBack(33);
	shortList.display();
	cout << endl;
	if (shortList.removeFront(value))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min 
			<< "\t  and the value removed was " << value;
	}
	else
	{
		cout << "unable to remove the front value.";
	}

	shortList.clearList();
	if (shortList.removeFront(value))
	{
		shortList.display();
		shortList.getSmallest(min);
		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t  and the value removed was " << value;
	}
	else
	{
		cout << endl << "unable to remove the front value, list is empty: "
			<< shortList.isEmpty() << endl;
	}

	cout << endl << "Testing Back..." << endl;
	
	shortList.clearList();
	shortList.insertFront(65);
	shortList.insertBack(78);
	shortList.display();
	cout << endl;
	if (shortList.removeBack(value))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << value;
	}
	else
	{
		cout << "unable to remove the back value.";
	}

	shortList.clearList();
	if (shortList.removeBack(value))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << value;
	}
	else
	{
		cout << endl <<"unable to remove the back value." << endl 
			<< "The list is empty:" << shortList.isEmpty() << endl;
	}

	cout << endl << "Testing At Index..." << endl;
	
	shortList.clearList();
	shortList.insertFront(44);
	shortList.insertBack(75);
	shortList.insertFront(82);
	shortList.display();
	cout << endl;
	if (shortList.removeAtIndex(value, 1))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << value;
	}
	else
	{
		cout << "unable to remove the index value.";
	}

	shortList.clearList();
	if (shortList.removeAtIndex(value, 1))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << value;
	}
	else
	{
		cout << endl<< "unable to remove the index value, " 
			<< "the list is empty: " << shortList.isEmpty() << endl;
	}

	shortList.clearList();
	shortList.insertFront(44);
	shortList.insertBack(75);
	shortList.insertFront(82);
	shortList.display();
	cout << endl;
	if (shortList.removeAtIndex(value, 10))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << value;
	}
	else
	{
		cout << "unable to remove the index value, 10 is out of capacity range."
			<< " But the list is full: " << shortList.isFull() << endl;
	}

	cout << endl << "Testing Remove..." << endl;

	short temp1 = 5;
	shortList.clearList();
	shortList.insertFront(5);
	shortList.insertBack(22);
	shortList.display();
	cout << endl;
	if (shortList.remove(temp1))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << temp1;
	}
	else
	{
		cout << "Unable to remove the inputed value.";
	}

	short temp2 = 2;
	if (shortList.remove(temp2))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min
			<< "\t the value removed was " << temp2;
	}
	else
	{
		cout << endl << "Unable to remove the inputed value: " << temp2 << endl;
	}

	cout << endl << "Update Functions Testing..." << endl << endl;

	cout << "Testing Front..." << endl;

	shortList.clearList();
	shortList.insertFront(97);
	shortList.insertBack(45);
	shortList.display();
	cout << endl;
	if (shortList.updateFront(3))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "Unable to update the front.";
	}

	shortList.clearList();
	shortList.insertBack(45);
	shortList.display();
	cout << endl;
	if (shortList.updateFront(3))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "Unable to update the front.";
	}

	shortList.clearList();
	if (shortList.updateFront(3))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "Unable to update the front, the list is empty: " 
			<< shortList.isEmpty() << endl;
	}

	cout << endl << "Testing Back..." << endl;
	
	shortList.clearList();
	shortList.insertFront(12);
	shortList.insertBack(34);
	shortList.display();
	cout << endl;
	if (shortList.updateBack(99))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "Unable to update the back.";
	}


	shortList.clearList();
	shortList.insertFront(12);
	shortList.display();
	cout << endl;
	if (shortList.updateBack(95))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "Unable to update the back.";
	}

	shortList.clearList();
	if (shortList.updateBack(95))
	{
		shortList.display();

		shortList.getSmallest(min);

		cout << endl << "Capacity is " << shortList.getCapacity() << "\t numValues is "
			<< shortList.getNumValues() << "\t the smallest values is " << min << endl;
	}
	else
	{
		cout << "Unable to update the back, list is empty: "
			<< shortList.isEmpty() << endl;
	}
	
	return 0;
}

//*****************************************************************************************************

/*Testing the capacity automatically being set to 2...
[0] 9
Capacity is 2    numValues is 1  the smallest values is 9

Insert testing...

Testing Front...
[0] 34  [1] 3
Capacity is 3    numValues is 2  the smallest values is 3
[0] 3
Capacity is 3    numValues is 1  the smallest values is 3
[0] 2   [1] 3   [2] 8   [3] 7
Capacity is 4    numValues is 4  the smallest values is 2
the list is full: 1

Testing Back...
[0] 15  [1] 5
Capacity is 3    numValues is 2  the smallest values is 5
[0] 5
Capacity is 3    numValues is 1  the smallest values is 5
[0] 7   [1] 2   [2] 8   [3] 12
Capacity is 4    numValues is 4  the smallest values is 2
The list is full: 1

Testing Index...
unable to insert the value at the index, list is empty: 1
[0] 4
Capacity is 3    numValues is 1  the smallest values is 4
unable to insert the value at the index 10, index is greater than capacity capacity is only: 3
[0] 7   [1] 6   [2] 4   [3] 90
Capacity is 4    numValues is 4  the smallest values is 4
[0] 4   [1] 6
Capacity is 3    numValues is 2  the smallest values is 4

Retrieve Functions Testing...

Testing Front...
[0] 6   [1] 90
The value at the front is 6
unable to retrieve the value at the front, list is empty: 1

Testing Back...
[0] 88  [1] 99
The value at the back is 99
unable to retrieve the value at the back, the list is empty: 1

Testing index...
[0] 6   [1] 77
The value at the index 1 is 77
unable to retrieve the value at the index 1, list is empty: 1

Remove Functions Testing...

Testing Front...
[0] 44  [1] 33
[0] 33
Capacity is 3    numValues is 1  the smallest values is 33        and the value removed was 44
unable to remove the front value, list is empty: 1

Testing Back...
[0] 65  [1] 78
[0] 65
Capacity is 3    numValues is 1  the smallest values is 65       the value removed was 78
unable to remove the back value.
The list is empty:1

Testing At Index...
[0] 82  [1] 44  [2] 75
[0] 82  [1] 75
Capacity is 3    numValues is 2  the smallest values is 75       the value removed was 44
unable to remove the index value, the list is empty: 1
[0] 82  [1] 44  [2] 75
unable to remove the index value, 10 is out of capacity range. But the list is full: 1

Testing Remove...
[0] 5   [1] 22
[0] 22
Capacity is 3    numValues is 1  the smallest values is 22       the value removed was 5
Unable to remove the inputed value: 2

Update Functions Testing...

Testing Front...
[0] 97  [1] 45
[0] 3   [1] 45
Capacity is 3    numValues is 2  the smallest values is 3
[0] 45
[0] 3
Capacity is 3    numValues is 1  the smallest values is 3
Unable to update the front, the list is empty: 1

Testing Back...
[0] 12  [1] 34
[0] 12  [1] 99
Capacity is 3    numValues is 2  the smallest values is 12
[0] 12
[0] 95
Capacity is 3    numValues is 1  the smallest values is 95
Unable to update the back, list is empty: 1
*/