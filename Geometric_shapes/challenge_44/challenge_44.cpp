#include <iostream> 

using namespace std;

int main () 
{
    int Number ;

    do 
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give a number greater than zero : " ;
            cin >> Number ;

        } while ( Number <= 0 ) ;

        cout << "\n\n\t\t * " << "The shape : " << "\n\n\n" ;
    
        for ( int i = 1 ; i <= Number ; i ++ )
            {
                cout << "\t\t\t\t\t" ;

                for ( int j = 1 ; j <= i ; j ++ )
                    cout << i << " " ;
      
                cout << endl ;
            }

    return 0 ;
} 
