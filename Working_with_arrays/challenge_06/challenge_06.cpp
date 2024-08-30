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

const int NEGATIVE_VALUE = -1 ;
const int POSITIVE_VALUE = 1 ;

void input_array ( int* array , int n ) 
{
    cout << "\n\t\t * Enter table items : " << endl ;
    for ( int i = 0 ; i < n ; ++ i )
    {
        cout << "\n\t\t\t\t * T [" << i + 1 << "] : " ;
        cin >> array [i] ;
    }
}

void process_array ( int* array , int n )
{
    for ( int i = 0 ; i < n ; ++ i ) 
    {
        if ( array [i] < 0 )
            array [i] = NEGATIVE_VALUE ;
        else 
            if ( array [i] > 0 )
                array [i] = POSITIVE_VALUE ;
    }
}

void print_array ( int* array , int n )
{
    for ( int i = 0 ; i < n ; i ++ )
        cout << array [i] << "  " ;
}

int main ()
{
    int* array , n ;

    do 
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me the number of table elements : " ;
            cin >> n ;

        } while ( n <= 0 ) ;
    
    array = new int [n] ;

    input_array ( array , n ) ;

    cout << "\n\t\t * The number of table elements is : " << n << endl ;
    cout << "\n\n\t\t * Table elements : " ;
    print_array ( array , n ) ;

    process_array ( array , n ) ;
    
    cout << "\n\n\t\t * New table elements : " ;
    print_array ( array , n ) ;
    delete [] array ;

    cout << endl ;    

    return 0 ;
}
