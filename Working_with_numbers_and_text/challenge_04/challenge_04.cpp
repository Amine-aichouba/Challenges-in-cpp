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

int count_occurrences ( string First_text , string Second_text )
{
    int counter = 0 ; 

    for ( size_t i = 0 ; i <= First_text.size() - Second_text.size() ; ++ i )
        {
            if ( First_text.substr ( i , Second_text.size() ) == Second_text )
                ++ counter ;
        }

    return counter ;
}

int main ()
{
    string First_text , Second_text ;
    
    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the first text : " ;
    getline ( cin , First_text ) ;
    cout << "\n\n\t\t * " << " Give me the second text : " ;  
    getline ( cin , Second_text ) ;
    cout << "\n\n\t\t * " << " The second text was repeated : " ;
    cout << count_occurrences ( First_text , Second_text ) << " times " << endl ;
    
    return 0 ;
}
