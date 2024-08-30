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

void find_all ( int array [] , int element , int array_size )
{
    for ( int i = 0 ; i < array_size ; i ++ )
        {
            if ( array [i] == element ) 
                cout << "\n\t\t * '" << element << "' found at index : " << i ;
        }   
}

int main ()
{
    int element ;
    int array [] = { 

    1 , 1 , 1 , 4 , 6 , 7 , 8 , 0 , 12 , 13 , 0 , 2 , 2 , 18 , 19 , 30 ,
    21 , 23 , 24 , 25 , 2 , 7 , 4 , 9 , 2 , 3 , 4 , 5 , 9 , 11 , 23 , 11 ,
    3 , 2 , 3 , 1 , 21 , 22 , 11 , 13 , 0 , 7 , 1 , 7 , 6 , 5 , 3 , 3 , 3 ,
    3 , 3 , 3 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 0  , 0 , 4 , 3 , 4 , 5 , 6 , 7

    } ;

    int array_size = sizeof ( array ) / sizeof ( *array ) ;

    clear_screen () ;
    cout << "\n\n\n\t\t * Give me the item you want to search for : " ;
    cin >> element ;

    find_all ( array , element , array_size ) ;

    cout << endl ;    

    return 0 ;
}
