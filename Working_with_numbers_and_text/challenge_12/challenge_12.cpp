#include <iostream>
#include <string>
#include <regex>

using namespace std;

void clear_screen ()
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

static int count_none_escape_chars ( string text )
{
    int counter = 0 ;
    string character = "" ;
    regex regex ( "\\S" ) ;

    if ( text.empty() )
        return 0 ;
    
    for ( size_t i = 0 ; i < text.length() ; i ++ )
        {
            character = text [i] ;
            if ( regex_match ( character , regex ) )
                counter ++ ;
        }

    return counter ;
}

int main ()
{ 
    string text ;
    
    clear_screen () ;

    cout << "\n\n\n\t\t * " << " Give me the text : " ;
    getline ( cin , text ) ;
    cout << "\n\n\t\t * " << " The letters of this text is : " << count_none_escape_chars ( text ) << " letters." ;
    cout << endl ;
    
    return 0 ;
}
