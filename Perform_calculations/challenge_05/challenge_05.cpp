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
    static int first_number , second_number;

    clear_screen () ;
     
    cout << "\n\n\n\t\t * Give me the first number : " ; 
    cin >> first_number ;
    cout << "\n\t\t * Give me the second number : " ; 
    cin >> second_number ;
    
    cout << "\n\n\t\t * " << first_number << " + " << second_number << " = " << first_number + second_number ; 
    cout << "\n\n\t\t * " << first_number << " - " << second_number << " = " << first_number - second_number ; 
    cout << "\n\n\t\t * " << first_number << " × " << second_number << " = " << first_number * second_number ; 
    if ( second_number == 0 )
        cout << "\n\n\t\t * It is not possible to divide by zero " ;
    else
        cout << "\n\n\t\t * " << first_number << " ÷ " << second_number << " = " << first_number / second_number << endl ; 

    return 0 ;
}
