/*
 Mark Max 2016/07/31
 Assignment 13.3: a13_3.cpp
 CIS 278 with Dave Harden
 
 This program asks the user to enter integers and stores them in an array. It
 sorts that array in ascending order and then prints the sorted array to standard
 out.
 */

#include <iostream>

using namespace std;

int getIntArray(int intArray[]);
void sortBySmallest(int intArray[], int startIndex, int endIndex);
int indexOfSmallest(int intArray[], int startIndex, int endIndex);
void printArray(int intArray[], int numItems);

int MAX_ITEMS = 100;

int main() {
    int intArray[MAX_ITEMS];
    int numItems = getIntArray(intArray);
    
    sortBySmallest(intArray, 0, numItems - 1);
    
    cout << "The sorted array is: " << endl;
    printArray(intArray, numItems);
}






/*
 Function getIntArray accepts a reference to an integer array and asks a user to
 enter numbers that are then stored into that integer array. It returns an int
 that represents how many numbers the user entered
 
 pre: an integer array exists
 post: the integer array is filled with user entered numbers and an int value
 equal to the number of entries is returned.
 */
int getIntArray(int intArray[]) {
    int temp;
    int numItems = 0;
    
    cout << "Enter an integer (-1 to stop): ";
    cin >> temp;
    
    while (temp != -1 && numItems < MAX_ITEMS) {
        intArray[numItems] = temp;
        numItems++;
        
        cout << "Enter an integer (-1 to stop): ";
        cin >> temp;
    }
    
    return numItems;
}






/*
 Function sortBySmallest accepts an int array parameter intArray and two int
 parameters startIndex and endIndex. It will sort intArray by the smallest to
 largest numbers from startIndex to endIndex.
 
 pre: a populated intArray exists and a starting and endIndex are selected
 post: the intArray is sorted smallest to largest
 */
void sortBySmallest(int intArray[], int startIndex, int endIndex) {
    if (startIndex != endIndex) {
        int targetIndex = indexOfSmallest(intArray, startIndex, endIndex);
        swap(intArray[startIndex], intArray[targetIndex]);
        sortBySmallest(intArray, startIndex + 1, endIndex);
    }
}







/*
 Function indexOfSmallest accepts an int array parameter intArray and two int
 parameters startIndex and endIndex. It will return the index of the smallest 
 int value between startIndex and endIndex.
 
 pre: a populated intArray exists and a starting and endIndex are selected
 post: the index of the smallest value in the intArray between startIndex and
 endIndex is returned.
 */
int indexOfSmallest(int intArray[], int startIndex, int endIndex) {
    int smallest = intArray[startIndex];
    int target = startIndex;
    
    for (int index = startIndex; index <= endIndex; index++) {
        if (intArray[index] < smallest) {
            smallest = intArray[index];
            target = index;
        }
    }
    
    return target;
}







/*
 Function printArray accepts an int array parameter intArray and an int parameter
 numItems which represents the number of items in intArray. The function prints
 the elements of the array to standard out separated by a space.
 
 pre: an populated intArray exists and a numItems is selected
 post: the elements of intArray are printed to standard out
 */
void printArray(int intArray[], int numItems) {
    for (int index = 0; index < numItems; index++) {
        cout << intArray[index] << " ";
    }
    cout << endl;
}


/*
 Enter an integer (-1 to stop): 30
 Enter an integer (-1 to stop): 20
 Enter an integer (-1 to stop): 15
 Enter an integer (-1 to stop): 68
 Enter an integer (-1 to stop): 93
 Enter an integer (-1 to stop): 14
 Enter an integer (-1 to stop): 1097
 Enter an integer (-1 to stop): 13
 Enter an integer (-1 to stop): 52
 Enter an integer (-1 to stop): 63
 Enter an integer (-1 to stop): 12
 Enter an integer (-1 to stop): -1
 The sorted array is:
 12 13 14 15 20 30 52 63 68 93 1097
*/