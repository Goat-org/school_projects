#include <iostream>

using namespace std;
void bubblesort(int list[], int length);
int binarySearch(const int list[], int listLength, int searchItem, int count);

int main()
{

    int myArray[7];
    int searchNumber;
    int count = 1;
    cout << "Enter 7 integers in any order:\n";
    for(int i=0; i<7; i++)
    {
        cin >> myArray[i];
    }
    cout << "The integers you entered before sorting: \n";
    for(int i=0; i<7; i++)
    {
        cout << myArray[i]<< " ";
    }

    bubblesort(myArray, 7);
    cout << "\nAfter sorting: \n";
    for(int i=0; i<7; i++)
    {
        cout << myArray[i]<< " ";
    }

    cout << "\nEnter any number you want to search for, from the list: ";
    cin >> searchNumber;
    cout << "The number " << searchNumber <<" took" << binarySearch(myArray, 7, searchNumber, count);
    return 0;
}


void bubblesort(int list[], int length)
{
 int i;
 int j;
 int temp;
 for (i = 1; i < length; i++)
 {
   for (j = 0; j < length - i; j++)
   {
     if (list[j] > list[j + 1])
      {
      temp = list[j];
      list[j] = list[j + 1];
      list[j + 1] = temp;
      }
   }
 }
}

int binarySearch(const int list[], int listLength, int searchItem, int count)
{
count = 0;
int first = 0;
int last = listLength - 1;
int mid;

bool found = false;
while (first <= last && !found)
{
mid = (first + last) / 2;
if (list[mid] == searchItem)
found = true;
else if (list[mid] > searchItem)
last = mid - 1;
else
first = mid + 1;
count++;
}
cout << " " << count << " iterations to find "<< "and the number was found in index: ";
if (found)
return mid;
else
return -1;
}




