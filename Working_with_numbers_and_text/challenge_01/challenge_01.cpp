#include <iostream>

using namespace std;

void clear_screen () 
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

int main ()
 {
    int Number , Rest ;

    do
        {
            clear_screen () ;
            cout << "\n\n" ;
            cout << "\t\t * " << " Give me a loving number : " ;
            cin >> Number ;

        } while ( Number < 0 ) ;
    
    Rest = 0 ;

    cout << "\n\n\t\t * " << "Sum of the numbers of the number : " << Number ; 
    
    while ( Number != 0 )
        {
            Rest += Number % 10 ; // Rest = Rest + Number % 10 
            Number /= 10 ;    // Number = Number / 10
        } ; 

    cout << " = " << Rest << endl ;
           
    return 0 ;
}
 