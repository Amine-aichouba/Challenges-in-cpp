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

void input_array ( int* arr , int n ) 
{
    cout << "\n\t\t * Enter table items : " << endl ;
    for ( int i = 0 ; i < n ; ++ i ) 
        {
            cout << "\n\t\t\t\t * T [" << i + 1 << "] : " ;
            cin >> arr [i] ;
        }
}

void print_array ( int* arr , int n ) 
{
    for ( int i = 0 ; i < n ; i ++ )
        cout << arr [i] << "  " ;
}

void bubble_sort ( int* arr , int n ) 
{
    int temp ; 
      
    for ( int i = 0 ; i < n - 1 ; ++ i ) 
        {
            for ( int j = 0 ; j < n - i - 1 ; j ++ ) 
                {
                    if ( arr [j] > arr [ j + 1 ] ) 
                        {
                            temp = arr [j] ; 
                            arr [j] = arr [ j + 1 ] ;
                            arr [ j + 1 ] = temp ;
                        }
                }
        }
}

int main() 
{
    int* arr , n ;

    do 
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me the number of table elements : " ;
            cin >> n ;

        } while ( n <= 0 ) ;

    arr = new int [n] ;

    input_array( arr , n ) ;

    cout << "\n\t\t * The number of table elements is : " << n << endl ;
    cout << "\n\t\t * Table elements : " ;
    print_array ( arr , n ) ;

    bubble_sort ( arr , n ) ;

    cout << "\n\n\t\t * Table elements arranged from smallest to largest : " ;
    print_array ( arr , n ) ;
    delete [] arr ;
    
    return 0 ;
}
