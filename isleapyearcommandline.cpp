 #include <iostream>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */
using namespace std;

int main(int argc, char*argv[]) {
   
    int leapYear;
    
           
        if (leapYear % 400 == 0 || (leapYear % 4 == 0 && leapYear % 100 != 0 ))
         
            cout << argv[1] << "was a leap year" <<endl ;
     
        else cout << argv[1] << "was not a leap" <<endl;
    return 0;                                          
}
