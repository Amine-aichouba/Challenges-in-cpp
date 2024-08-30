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
    
    for ( int i = 0 ; i <= ( Height / 2 ) ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int j = 0 ; j < ( Height / 2 ) - i ; j ++ )
                cout << "  " ;
            
            for ( int k = 0 ; k <= ( Height / 2 ) ; k ++ )
                {
                    if ( i >= k )
                        cout << "• " ; 
                    else 
                        continue ;
                }
            cout << endl ;
        }
    for ( int i = 0 ; i <= ( Height / 2 ) + 1 ; i ++ )  
        {
            cout << "\t\t\t\t\t" ;
            for ( int j = 0 ; j <= ( Height / 2 ) ; j ++ )      
                {
                    if ( i >= j )
                        cout << "  " ;
                    else 
                        continue ;    
                } 

            for ( int k = 0 ; k < ( Height / 2 ) - i ; k ++ )
                cout << "• " ;
            cout << endl ;    
        }
        
    return 0 ;
}
