#include <iostream>

using namespace std ;

int main ()
{
    int Height ;
    do
    {
        system ( "clear" ) ;
        cout << "\n\n" ;
        cout << "\t\t * " << "Give the height of the triangle : " ;
        cin >> Height ;
        
    } while ( Height <= 0 ) ;
  
    cout << "\n\n\t\t * " << "The triangle :" << "\n\n\n" ;
    for ( int i = 0 ; i <= Height ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int  k = 0 ; k < Height - i  ; k ++ )
                cout << "  " ;

            for ( int j = 0 ; j < i ; j ++ )
                cout << "• " ;

            cout << endl ;
        }
        
    return 0 ;
}
