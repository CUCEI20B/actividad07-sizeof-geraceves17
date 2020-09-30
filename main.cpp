#include <iostream>

using namespace std;

int main() {
    string cad;

    getline(cin, cad);
    if (cad == "char"){

        cout << sizeof(char) << endl;
    }
    else if(cad == "int"){

        cout << sizeof(int) << endl;
    }
    else if(cad == "short"){

        cout << sizeof(short) << endl;
    }
    else if(cad == "float"){

        cout << sizeof(float) << endl;
    }
    else if(cad == "double"){

        cout << sizeof(double) << endl;
    }
    else if(cad == "long"){

        cout << sizeof(long) << endl;
    }
    

    return 0;
}