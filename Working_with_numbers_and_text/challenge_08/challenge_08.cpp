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

string double_chars ( string text ) 
{
    string new_text = "" ;
    for ( size_t i = 0 ; i <= text.length() ; i ++ )
        {
            new_text += text [i] ;
            new_text += text [i] ;
        }
    return new_text ;
}

int main ()
{
    string text ;

    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the text : " ;
    getline ( cin , text ) ;
    cout << "\n\n\t\t * " << " The text : " ;
    cout << double_chars ( text ) << endl ;

    return 0 ;
}