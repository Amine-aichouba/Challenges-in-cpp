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
    int first_number , second_number;

    clear_screen () ;
     
    cout << "\n\n\n\t\t * Give me the first number : " ; 
    cin >> first_number ;
    cout << "\n\t\t * Give me the second number : " ; 
    cin >> second_number ;
    
    if ( first_number < second_number )
        cout << "\n\n\t\t * The first number is the smallest : " << first_number << " < " << second_number ;

    if ( second_number < first_number )
        cout << "\n\n\t\t * The second number is the smallest : " << second_number << " < " << first_number ;

    else
        cout << "\n\n\t\t * The two numbers are equal : " << first_number << " = " << second_number << endl ;

    return 0 ;
}
