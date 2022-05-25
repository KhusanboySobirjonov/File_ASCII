#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string sentence, sentence1;
    //f nomli matnli fayldagi ma'lumotlar o'qilmoqda
    ifstream read;
    read.open("f.txt");
    if (read.is_open()){
        cout << "\nFaylda yozilgan gapimiz: \n";
        while(!read.eof()) {
            getline(read,sentence1);
            cout << sentence1 << endl;
        }
        read.close();
    }
    else
    {
        ofstream write;
        //f nomli matnli fayl yaratildi va bu faylga yozilmoqda
        write.open("f.txt");
        cout << "Gapni kiriting:\n";
        getline(cin,sentence);
        write << sentence;
        write.close();

        ifstream read;
        read.open("f.txt");
        cout << "\nFaylda yozilgan gapimiz: \n";
        while(!read.eof()) {
            getline(read,sentence1);
            cout << sentence1 << endl;
        }
        read.close();
    }
    //ASCII nomli
    ofstream ASCII;
    ASCII.open("g.txt");
    int n, s=1, k=0;
    n=sentence1.length();
    char x[n];
    string a[s];
    for (int i=0; i<n; i++) {
        if (sentence1[i]==32) {
            s+=1;
        }
    }
    for (int j=0; j<s; j++) {
        for (int i=k; i<n; i++) {
            if (sentence1[i]!=' ') {
                a[j]+=sentence1[i];
            }
            else {
                k=i+2;
                cout << endl;
                break;
            }
        }
    }
    cout << s;
    ASCII.close();
    return 0;
}
