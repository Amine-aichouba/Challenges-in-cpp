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
    int* arr , n , sum = 0 ;

    do 
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me the number of table elements : " ;
            cin >> n ;

        } while ( n <= 0 ) ;
    
    arr = new int [ n ] ;
    
    cout << "\n\t\t * Enter table items :" << endl ;
    for ( int i = 1 ; i <= n ; ++ i )
        {
            cout << "\n\t\t\t\t * T [" << i << "] : " ; 
            cin >> arr [i] ;
        }

    cout << "\n\t\t * The number of table elements is : " << n << endl ;


    cout << "\n\t\t * Table elements : " ;
    for ( int i = 1 ; i <= n ; i ++ )
        {
            cout << *( arr + i ) << ( ( i == n )  ? " = " : " + " ) ; 
            sum += *( arr + i ) ;
        }
    cout << sum << endl ;    

    delete [] arr ;

    return 0 ;
}
