#include <iostream>
#include <vector>
using namespace std;

int main(){
    string secret_word = "";
    string characters;
    char new_character;
    short times = 10;

    cout << "EL AHORCADO" << endl << endl;
    
    if(secret_word == ""){
        cout << "Escriba la palabra secreta: ";
        cin >> secret_word;
    }

    for(int i=0; i<secret_word.size(); i++){
        characters.push_back('_');
    }

    while(true){
        system("clear");
        cout << "EL AHORCADO" << endl << endl;
        cout << "Intentos: " << times << endl << endl;
        cout << characters << endl << endl;

        if(characters == secret_word){
            cout << "¡VICTORIA!" << endl;
            break;
        }
        if(times <= 0){
            cout << "Has perdido. La palabra era \"" << secret_word << '"' << endl;
            break;
        }
        
        cout << "Elije letra: ";
        cin >> new_character;
        if(new_character == '-') break;

        for(int i=0; i<secret_word.size(); i++){
            if(secret_word.at(i) == new_character) characters.at(i) = new_character;
        }

        times--;
    }
    return 0;
}
