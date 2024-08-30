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

void print_array ( const int* array , int n )
{
    for ( int i = 0 ; i < n ; i ++ )
        cout << *( array + i ) << "  " ;
}

int main ()
{
    int *A , *B , *C , n ;

    do 
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me the number of table elements : " ;
            cin >> n ;

        } while ( n <= 0 ) ;
    
    A = new int [n] ;

    cout << "\n\t\t * Enter table A items : " << endl ;
    for ( int i = 0 ; i < n ; ++ i )
        {
            cout << "\n\t\t\t\t * A [" << i + 1 << "] : " ;
            cin >> A [i] ;
        }
        
    B = new int [n] ;

    cout << "\n\t\t * Enter table B items : " << endl ;
    for ( int i = 0 ; i < n ; ++ i )
        {
            cout << "\n\t\t\t\t * B [" << i + 1 << "] : " ;
            cin >> B [i] ;
        }

    C = new int [n] ;
    
    for ( int i = 0 ; i < n ; i ++ )
        C [i] = A [i] + B [i] ;
    
    cout << "\n\n\t\t * Elements of Table A : " ;
    print_array ( A , n ) ;
    delete [] A ;

    cout << "\n\n\t\t * Elements of Table B : " ;
    print_array ( B , n ) ;
    delete [] B ;

    cout << "\n\n\t\t * Elements of Table C : " ;
    print_array ( C , n ) ;    
    delete [] C ;

    cout << endl ;    

    return 0 ;
}
