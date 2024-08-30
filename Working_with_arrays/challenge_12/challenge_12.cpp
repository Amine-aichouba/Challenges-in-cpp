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

void count_occurrence ( int array [] , int array_size )
{
    int counter = 0 ;
    
    for ( int i = 0 ; i < array_size ; i ++ )
        {
            if ( array [i] == 0 )
                ++ counter ;    
        }

    if ( counter > 0 )
        cout << "\n\n\t\t * [0] is repeated : " << counter <<  " time(s)" ;

    for ( int i = 0  ; i < array_size ; i ++ )
        { 
            counter = 1 ;

            if ( !( array [i] == 0 ) )
                { 
                    for ( int j = i + 1 ; j < array_size ; ++ j )
                        {
                            if ( array [i] == array [j] )
                                {
                                    ++ counter ;
                                    array [j] = 0 ;
                                }
                                
                        }

                    cout << "\n\n\t\t * [" << array [i] << "] is repeated : " << counter <<  " time(s)" ;    
                }
        }
}

int main ()
{
    int array [] = { 1 , 1 , 1 , 4 , 6 , 7 , 8 , 0 , 12 , 13 , 0 , 2 , 2 , 18 , 19 , 30 } ;  
    int array_size = sizeof ( array ) / sizeof ( *array ) ;

    clear_screen () ;

    count_occurrence (  array , array_size ) ;
    cout << endl ;    

    return 0 ;
}
