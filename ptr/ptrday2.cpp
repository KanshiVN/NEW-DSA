#include <iostream>
using namespace std;
int main()
{
// A TO Z PRINTING
    // char ch = 'a';
    // cout << ch << " ";
    // char *ptr = &ch;
    // while (ch != 'z')
    // {
    //     ch++;
    //     cout << *ptr << " ";
    // }

// int arr[11]={2,4,8,5};
// // all of them print the same value
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl;
// cout<<arr<<endl;

// IMPLEMENTATION OF CHAR ARRAY IS DIFFERENT
char ch[5]="abcd";//5 size but 4 elements because 5th location is for null
cout<<ch<<endl;
char *ptr = &ch[0];
cout<<ptr<<endl;//here the address is not print
cout<<*ptr<<endl;//first element is print
cout<<&ch<<endl;





// int temp[10];
// cout<<sizeof(temp)<<endl;
// int *ptr =&temp[0];
// cout<<sizeof(ptr)<<endl;


// base address is arr
// cout<<arr<<endl;
// cout<<&arr[0]<<endl;
// // using the trial and error to know the different pointers

// cout<<*arr<<endl;
// cout<<*arr+1<<endl;
// cout<<*(arr + 1)<<endl;
// cout<<*(arr) + 1<<endl;

// arr[i]=*(arr+1)
return 0;    
}