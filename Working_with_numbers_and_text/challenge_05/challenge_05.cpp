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

string reverse_string ( string text )
{
    string reverse ;

    for ( size_t i = 0 ; i < text.size()  ; i ++ )
        reverse = text [i] + reverse ;

    return reverse ;    
}

int main ()
{
    string text ;
    
    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the text : " ;
    getline (cin , text ) ;
    cout << "\n\n\t\t * " << " The inverted text is : " << reverse_string ( text ) << endl ;
    
    return 0 ;
}
