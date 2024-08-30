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
      
int main() 
{
    int* arr , n ;
    double average = 0 ;

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

    for ( int i = 0 ; i < n ; i ++ ) 
        average += ( double ) arr [i] ;
    
    average = ( double ) average / n ;

    cout << "\n\n\t\t * Average values of table elements : " << average ;
    delete [] arr ; 
    
    return 0 ;
}
