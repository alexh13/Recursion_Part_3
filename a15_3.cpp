/*
Alex Hughes
CS 110B
5/11/19
Professor Dave
Assignment 15.3

Assignment calls for a recursive function that sorts an array of ints in ascending order with the funciton placing the
smallest element first, then sort the rest by a recursive call.
 */


#include <iostream>

using namespace std;

void sortArray(int[], int, int);
int smallestNumber(int[], int, int);






//Main
int main()
{

    int values[] = {13, 11, 3, 17, 14};
    int i;


    printf("Before sorting: ");
    for(i=0; i<5; i++)
        printf("%d ", values[i]);


    sortArray(values, 0, 4);

    cout << "\n" << endl;

    printf("After sorting: ");
    for(i=0; i<5; i++)
        printf("%d ", values[i]);

    cout << endl;
    return 0;
}






void sortArray(int values[], int start, int last)
{
    int pos, temp;

    if(start > last)
        return;

    pos = smallestNumber(values, start, last);

    temp = values[start];
    values[start] = values[pos];
    values[pos] = temp;

    start = start + 1;

    return sortArray(values, start, last);
}






int smallestNumber(int values[], int start, int last)
{
    int pos, i;

    pos = start;

    for(i=start; i<=last; i++)
    {
        if(values[i] < values[pos])
            pos = i;
    }
    return pos;
}

/*
OUTPUT:
/Users/alexhughes/CLionProjects/15_3/cmake-build-debug/15_3

Before sorting: 13 11 3 17 14

After sorting: 3 11 13 14 17


 */