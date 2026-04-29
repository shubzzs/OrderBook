#include "all_Libs.hpp"

using namespace std;

int main()
{
    ofstream MyFile("hello.txt");
        
    if(MyFile.is_open())
    {
        MyFile << "this is newly created file in c++\n";

        MyFile << "Hello this is greeting for creating a new File";
        MyFile.close();
        cout << "File created and closed successfully." << '\n';
    }else{
        cout << "Error: Could not create file." << '\n';
    }

    ifstream file_in("hello.txt");

    string s;

    getline(file_in , s);
    cout << "Read the string in the file : " << s << '\n';


    return 0;
}
