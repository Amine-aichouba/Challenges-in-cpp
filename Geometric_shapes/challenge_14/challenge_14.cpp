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
                cout << "- " ;
            cout << "• " ;
            for ( int k = 0 ; k <= Height / 2 ; k ++ )
                {
                    if ( k < i ) 
                        cout << "  " ;
                    else 
                        continue ;
                }        
            for ( int t = 1 ; t < Height / 2 ; t ++ )
                {
                    if ( t < i )
                        cout << "  " ;
                    else 
                        continue ;
                }
        
            if ( i >= 1 )
                cout << "• " ;
            for ( int j = 0 ; j < Height / 2 - i ; j ++ )
                cout << "- " ;
            cout << endl ;
        }
    for ( int I = 0 ; I < Height / 2 ; I ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int J = 0 ; J <= Height - 4 ; J ++ )
                {
                    if ( J <= I ) 
                        cout << "- " ;
                    else 
                        continue ;
                }
            if ( I < Height / 2 - 1 )
                cout << "• " ;
            for ( int K = 1 ; K < Height / 2 - I ; K ++ )
                cout << "  " ;
            for ( int T = 2 ; T < Height / 2 - I ; T ++ )    
                cout << "  " ;
                            
            cout << "• " ; 
            
            for ( int X = 0 ; X <= Height - 4 ; X ++ )
            {
                if ( X <= I ) 
                    cout << "- " ;
                else 
                    continue ;
            }
            cout << endl ;  

        }
    
    return 0 ;
}
