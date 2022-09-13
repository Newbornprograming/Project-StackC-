#include <iostream>
#include <string>
using namespace std;
//deklarasai struct
struct STACK
{
    int top;
    string data[10];
};
//classs stack
STACK tumpuk;
//fungsi menambahkan stack
void push(string input)
{
    tumpuk.top++;
    tumpuk.data[tumpuk.top] = input;
}
string cetakdel()
{
    return tumpuk.data[tumpuk.top];
}
void pop()
{
    tumpuk.top--;
}
void clear()
{
    tumpuk.top = -1;
}
bool isEmpty()
{
    if (tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isFull()
{
    if (tumpuk.top == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void print()
{
    cout << "Data dalam Stack :" << endl;
    for(int i=0;i<=tumpuk.top;i++)
    {
        cout << "Data ke-" << i+1 << " = " << tumpuk.data[i] << " " << endl;
    }
}
//program menu
int main()
{
    system("cls");
    int pilih;
    string input;
    clear();
    do
    {   
        cout << "========Program Stack========" << endl;
        cout << "1. Push Data" << endl;
        cout << "2. Pop Data" << endl;
        cout << "3. Print Data" << endl;
        cout << "4. Clear Data" << endl;
        cout << "5. Exit" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch(pilih){
            case 1:
            {
                if(isFull() == 1)
                {
                    cout << "Stack sudah penuh" << endl;
                }
                else
                {
                    cout << "Data yang akan di push : ";
                    cin >> input;
                    push(input);
                }
                system("cls");
                break;
            }
            case 2:
            {
                if(isEmpty() == 1)
                {
                    cout << "Stack belum terisi data" << endl;
                }
                else
                {
                    cout << "Data yang terahkir dihapus adalah " << cetakdel()  << endl;
                    pop();
                }
                break;
            }
            case 3:
            {
                if(isEmpty() == 1)
                {
                    cout << "Stack belum terisi data" << endl;
                }
                else
                {
                    print();
                }
                break;
            }
            case 4:
            {
                clear();
                cout << "Semua data sudah di Clear" << endl;
                break;
            }
        } 
    }while(pilih >= 1 && pilih <= 4);
    return 0;
}