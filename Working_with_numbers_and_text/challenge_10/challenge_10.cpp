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

int main ()
{
    string text ;
    char X ;
     

    clear_screen () ;  
    
    cout << "\n\n\n\t\t * " << " Give me the text : " ;
    getline ( cin , text ) ;
    cout << "\n\n\t\t * " << " Give me a letter : " ;
    cin >> X ;

    for ( size_t i = 0 ; i <= text.length() ; i ++ )
        {
            if ( text [i]  == X )
                cout << "\n\n\t\t * " << X << " found at index : " << i ;
        }
    cout << endl ;
    
    return 0 ;
}