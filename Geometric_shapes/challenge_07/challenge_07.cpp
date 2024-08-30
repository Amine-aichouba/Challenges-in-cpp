#include <iostream>
using namespace std; 

int main ()
{
    int Length , Width ;
    do 
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the length of the parallelogram : " ;
            cin >> Length ;
            cout << "\n\t\t * " << "Give the width of the parallelogram : " ;
            cin >> Width ;

        } while ( Length <= 0 || Width <= 0 ) ;

    cout << "\n\n\t\t * " << "The triangle :" << "\n\n\n" ;

    for ( int  i = 0 ; i < Width ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int j = 0 ; j < Length ; j ++ )
                {
                    if ( i >= j )
                        cout << "  " ;
                    else 
                        continue ;     
                }
                  
            for ( int k = 0 ; k < Length ; k ++ )
                cout << "• " ;
            cout << endl ;    
        }

    return 0 ;
}
