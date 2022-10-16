// Encryptor and decryptor

//string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
//key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int decryptor_encryptor() {

	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ., !" };
	string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr., !" };
	string message;
	string encrypted_message;
	char input_menu_value;

	do {
		cout << "Main menu" << endl;
		cout << "1 - Enter message" << endl;
		cout << "2 - Encrypt message" << endl;
		cout << "3 - Decrypt message" << endl;
		cout << "4 - Show encrypted messsage" << endl;
		cout << "5 - Show original messsage" << endl;
		cout << "Q - quit" << endl;
		cin >> input_menu_value;
		switch (input_menu_value) {
		case '1':
			cout << "Enter a message:" << endl;
			cin.ignore();
			getline(cin, message);
			break;
		case '2':
			if (message.length() == 0) {
				cout << "Enter a message first!" << endl;
			}
			else {
				for (size_t i{ 0 }; i < message.length(); i++) {
					for (size_t j{ 0 }; j < alphabet.length(); j++) {
						if (message.at(i) == alphabet.at(j)) {
							encrypted_message.push_back(key.at(j));
						}
					}
				}
			}
			break;
		case '3':
			if (message.length() == 0) {
				cout << "Enter a message first!" << endl;
			}
			else {
				encrypted_message = message;
				message.clear();
				for (size_t i{ 0 }; i < encrypted_message.length(); i++) {
					for (size_t j{ 0 }; j < key.length(); j++) {
						if (encrypted_message.at(i) == key.at(j)) {
							message.push_back(alphabet.at(j));
						}
					}
				}
			}
			break;
		case '4':
			cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << "Encrypred message:\n" << encrypted_message << endl;
			cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
			break;
		case '5':
			cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << "Original message:\n" << message << endl;
			cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
			break;
		case 'q':
		case 'Q':
			cout << "bye" << endl;
			break;
		default:
			cout << "Wrong input" << endl;
		}

	} while (input_menu_value != 'q' && input_menu_value != 'Q');


	return 0;
}