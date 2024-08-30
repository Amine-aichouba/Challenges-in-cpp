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
    int element ;
    int array [] = { 1 , 29 , 41 , 4 , 6 , 7 , 8 , 10 , 12 , 13 , 14 , 16 , 17 , 18 , 19 , 30 , 21 , 23 , 24 , 25 } ;
    int array_size = sizeof ( array ) / sizeof ( *array ) ;
    bool exists = false ;

    clear_screen () ;
    cout << "\n\n\n\t\t * Give me the item you want to search for : " ;
    cin >> element ;
    
    for ( int i = 0 ; i < array_size ; i ++ )
        {
            if ( array [i] == element )
                {
                    exists = true ;
                    break ;
                }
        }
    
    if ( exists )
        cout << "\n\t\t * The item you're looking for is in the table !! " ;
    else 
        cout << "\n\t\t * The item you're looking for doesn't exist in the table !! " ;

    cout << endl ;    

    return 0 ;
}
