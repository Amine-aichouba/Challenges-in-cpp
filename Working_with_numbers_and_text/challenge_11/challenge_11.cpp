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

int count_words ( string text ) 
{
    int counter = 0 ;

    if ( text.empty() )
        return 0 ;
               
    text += " " ;

    for ( size_t i = 0 ; i < text.length() ; i ++ )
        {
            if ( text [i] == ' ' && text [ i + 1 ] != ' ' )
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
    cout << "\n\n\t\t * " << " The word count of this text is : " << count_words ( text ) << " words." ;
    cout << endl ;
    
    return 0 ;
}
