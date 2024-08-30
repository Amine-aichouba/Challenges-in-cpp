#include <iostream>

using namespace std;

int main ()
{
    int Height ;
    do
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the height of the triangle : " ;
            cin >> Height ;

        } while ( Height <= 0 || Height % 2 == 0 ) ;

    cout << "\n\n\t\t * " << "The triangle : " << "\n\n\n" ; 

    for ( int i = 0 ; i <= Height / 2 ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int j = 0 ; j < Height / 2 - i ; j ++ ) 
                cout << "  " ;
            for ( int k = 0 ; k <= i ; k ++ )    
               cout << "• " ;
            for ( int t = 0 ; t < i ; t ++ )    
               cout << "• " ;
            cout << endl ;    
            
        }
    for ( int x = 0 ; x < Height / 2 ; x ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int y = 0 ; y <= x  ; y ++ )
                cout << "  " ;
            for ( int z = 0 ; z < Height / 2 - x ; z ++ )
                cout << "• " ;
            for ( int s = 1 ; s < Height / 2 - x ; s ++ )
                cout << "• " ;
                
            cout << endl ;
        }

    return 0 ;
}