#include <iostream>

using namespace std ;

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
    int month_number ;
    
    clear_screen () ;

    cout << "\n\n\n\t\t * Give me the number of the month you want to view : " ;
    cin >> month_number ;

    switch ( month_number )
        {
            case 1 :
                cout << "\n\n\t\t * The month with the number -01- is : January " ;
                break ;
            case 2 :
                cout << "\n\n\t\t * The month with the number -02- is : February " ;
                break ;
            case 3 :
                cout << "\n\n\t\t * The month with the number -03- is : March " ;
                break ;
            case 4 :
                cout << "\n\n\t\t * The month with the number -04- is : April " ;
                break ;
            case 5 :
                cout << "\n\n\t\t * The month with the number -05- is : May " ;
                break ;
            case 6 :
                cout << "\n\n\t\t * The month with the number -06- is : Joan " ;
                break ;
            case 7 :
                cout << "\n\n\t\t * The month with the number -07- is : July " ;
                break ;
            case 8 :
                cout << "\n\n\t\t * The month with the number -08- is : August " ;
                break ;
            case 9 :
                cout << "\n\n\t\t * The month with the number -09- is : September " ;
                break ;
            case 10 :
                cout << "\n\n\t\t * The month with the number -10- is : October " ;
                break ;
            case 11 :
                cout << "\n\n\t\t * The month with the number -11- is : November " ;
                break ;
            case 12 :
                cout << "\n\n\t\t * The month with the number -12- is : December " ;
                break ;
            default :
                cout << "\n\n\t\t * Error input, Month number should be between 1 and 12." ;
                break ;
        }
        
    cout << endl ;

    return 0 ;
}
