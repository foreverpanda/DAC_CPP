#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n--- File Operations ---\n";
        cout << "1. Write File\n";
        cout << "2. Read File\n";
        cout << "3. Copy File\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            string filename, data;
            cout << "Enter filename to write: ";
            getline(cin, filename);
            cout << "Enter data: ";
            getline(cin, data);
            ofstream fout(filename);
            fout << data << endl;
            fout.close();
            cout << "Data written.\n";
        }
        else if(choice == 2) {
            string filename, line;
            cout << "Enter filename to read: ";
            getline(cin, filename);
            ifstream fin(filename);
            if(!fin) {
                cout << "File not found.\n";
                continue;
            }
            cout << "Contents of " << filename << ":\n";
            while(getline(fin, line)) {
                cout << line << endl;
            }
            fin.close();
        }
        else if(choice == 3) {
            string source, dest, line;
            cout << "Enter source filename: ";
            getline(cin, source);
            cout << "Enter destination filename: ";
            getline(cin, dest);
            ifstream fin(source);
            ofstream fout(dest);
            if(!fin) {
                cout << "Source file not found.\n";
                continue;
            }
            while(getline(fin, line)) {
                fout << line << endl;
            }
            fin.close();
            fout.close();
            cout << "Data copied from " << source << " to " << dest << endl;
        }
        else if(choice == 0) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}
