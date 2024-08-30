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
    int* arr , n , number_positive = 0 , number_negative = 0 , number_null = 0;

    do 
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me the number of table elements : " ;
            cin >> n ;

        } while ( n <= 0 ) ;
    
    arr = new int [n] ;
    
    cout << "\n\t\t * Enter table items :" << endl ;

    for ( int i = 0 ; i < n ; ++ i )
        {
            cout << "\n\t\t\t\t * T [" << i + 1 << "] : " ; 
            cin >> arr [i] ;
        }

    cout << "\n\t\t * The number of table elements is : " << n << endl ;

    for ( int i = 0 ; i < n ; ++ i )
        {
            if ( arr [i] > 0 )
                number_positive ++ ;
            else 
                if ( arr [i] < 0 )
                    number_negative ++ ;
                else
                    number_null ++ ;
        }

    cout << "\n\t\t * Number of positive table elements : " ;
    cout << number_positive << endl ;

    cout << "\n\t\t * Number of negative table elements : " ;
    cout << number_negative << endl ;

    cout << "\n\t\t * Number of table elements equal to zero : " ;  
    cout << number_null << endl ;   

    delete [] arr ;

    return 0 ;
}
