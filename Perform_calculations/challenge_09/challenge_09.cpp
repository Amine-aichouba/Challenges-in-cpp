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

int sum ( int first_number , int second_number )
{
    return first_number + second_number ;
}

int multiplication ( int first_number , int second_number )
{
    return first_number * second_number ;
}

int division ( int first_number , int second_number ) 
{
    return first_number / second_number ;
}

int subtraction ( int first_number , int second_number )
{
    return first_number - second_number ;
}

int main ()
{
    int first_number , second_number , operation ;
    
    clear_screen () ; 

    cout << "\n\n\n\t\t * Give me the first number : " ; 
    cin >> first_number ;
    cout << "\n\t\t * Give me the second number : " ; 
    cin >> second_number ;
    cout << endl ;
    do
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * first_number : " << first_number ; 
            cout << "\n\n\t\t * second_number : " << second_number ;
            cout << "\n\n\t\t * Sum -------------> [1]" << endl ;
            cout << "\n\t\t * Subtraction -----> [2]" << endl ;
            cout << "\n\t\t * Multiplication --> [3]" << endl ;
            cout << "\n\t\t * Division --------> [4]" << endl ;
            cout << "\n\n\t\t * Give me one of the options : " ;
            cin >> operation ;

        } while ( operation < 1 || operation > 4 ) ;

    switch ( operation )
        {
            case 1 :
                clear_screen () ;
                cout << "\n\n\n\t\t * first_number : " << first_number ; 
                cout << "\n\n\t\t * second_number : " << second_number ;
                cout << "\n\n\t\t * Sum : " << first_number << " + " << second_number << " = " ;
                cout << sum ( first_number , second_number ) ;
                break ;
           
            case 2 :
                clear_screen () ;
                cout << "\n\n\n\t\t * first_number : " << first_number ; 
                cout << "\n\n\t\t * second_number : " << second_number ;
                cout << "\n\n\t\t * Subtraction : " << first_number << " - " << second_number << " = " ;
                cout << subtraction ( first_number , second_number ) ;
                break ;

            case 3 :
                clear_screen () ;
                cout << "\n\n\n\t\t * first_number : " << first_number ; 
                cout << "\n\n\t\t * second_number : " << second_number ;
                cout << "\n\n\t\t * Multiplication : " << first_number << " × " << second_number << " = " ;
                cout << multiplication ( first_number , second_number ) ;
                break ;

            case 4 :
                if ( second_number != 0 )    
                    {   
                        clear_screen () ;
                        cout << "\n\n\n\t\t * first_number : " << first_number ; 
                        cout << "\n\n\t\t * second_number : " << second_number ;
                        cout << "\n\n\t\t * Division : " << first_number << " ÷ " << second_number << " = " ;
                        cout << division ( first_number , second_number ) ;
                    }
                    else 
                        {
                            clear_screen () ;
                            cout << "\n\n\n\t\t * first_number : " << first_number ; 
                            cout << "\n\n\t\t * second_number : " << second_number ;
                            cout << "\n\n\t\t * It is not possible to divide by zero" ;
                        }                  
                break ;
        }
    
    cout << endl ;
    
    return 0 ;
}
