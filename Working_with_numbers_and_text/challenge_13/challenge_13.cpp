#include <iostream>
#include <string>
#include "vector"
using namespace std;

void clear_screen ()
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

void print_words_occurence ( string text )
{
    
    int counter = 0 ;
    string word = "" ;
    vector < string > words ;

    if ( text.empty() )
        return ;
    
    text += " " ;

    for ( size_t i = 0 ; i < text.length() ; i ++ )
        {
            if ( text [i] != ' ' )
                word += text [i] ;        
            else
                {
                    words.push_back ( word ) ;
                    word = "" ;
                }
        }

    cout << "\n\n" ;
    for ( size_t i = 0 ; i < words.size() ; i ++ )
    {
        counter = 1 ;
        for ( size_t j = i + 1 ; j < words.size() ; j ++ )
        {
            if ( words [i] == words [j] )
            {
                counter = counter + 1 ;
                words [j] = "" ;
            }
        }
        if ( words [i] != "" )
            cout << "\n\t\t * [" << counter  <<"] ---> "<<  words [i] << endl ;   
    }
}

int main ()
{ 
    string text ;
    
    clear_screen () ;

    cout << "\n\n\n\t\t * " << " Give me the text : " ;
    getline ( cin , text ) ;
    
    print_words_occurence ( text )  ;
    cout << endl ;
    
    return 0 ;
}
