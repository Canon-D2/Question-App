#include<iostream>
using namespace std;
int main() {
    string question[10];
    char answer1[10], answer2[20], mode, chose, i;
    int numberfalse[10];                                                                                                  ///////////
    question[0] = "Cau 1/ Loai chim nao nho nhat the gioi?\nA.Chim se\nB.Chim ruoi\nC.Chim chich choe\nD.Chim sao\n";    //Cau hoi//
    question[1] = "Cau 2/ Ai la tong thong thu 45 cua My?\nA.Obama\nB.Kenedy\nC.Trump\nD.Biden\n";                      ///////////
    question[2] = "Cau 3/ Tong so hanh tinh trong he mat troi?\nA.8\nB.9\nC.10\nD.11\n";
    question[3] = "Cau 4/ Ai la nguoi dau tien dat chan len mat trang?\nA.Buzz Aldrin\nB.Charles Pete Conrad\nC.Neil Armstrong\nD.Alan Bean\n";
    question[4] = "Cau 5/ Chat nao dan dien tot nhat?\nA.Bac\nB.Vang\nC.Dong\nD.Chi\n";
    question[5] = "Cau 6/ Tong so quoc gia theo che do XHCN la?\nA.1\nB.3\nC.5\nD.7\n";
    question[6] = "Cau 7/ Quoc gia nao ngheo nhat?\nA.Somalia\nB.Nam Sudan\nC.Ethiopia\nD.Venezuela\n";
    question[7] = "Cau 8/ He dieu hanh nao co ma nguon mo?\nA.Windows\nB.Mac OS\nC.MS DOS\nD.Linux\n";
    question[8] = "Cau 9/ Dao nao lon nhat Viet Nam?\nA.Phu quoc\nB.Ly Son\nC.Phu quy\nD.Co To\n";
    question[9] = "Cau 10/ Bac ho ra di tim duong cuu nuoc vao?\nA.3/6/1911\nB.4/6/1911\nC.5/6/1911\nD.6/6/1911\n";       //////////
    answer1[0] = 'b'; answer2[0] = 'B'; numberfalse[0] = 0;   answer1[1] = 'd'; answer2[1] = 'D'; numberfalse[1] = 0;    //Dap an//
    answer1[2] = 'a'; answer2[2] = 'A'; numberfalse[2] = 0;   answer1[3] = 'c'; answer2[3] = 'C'; numberfalse[3] = 0;   //////////
    answer1[4] = 'a'; answer2[4] = 'A'; numberfalse[4] = 0;   answer1[5] = 'c'; answer2[5] = 'C'; numberfalse[5] = 0;
    answer1[6] = 'b'; answer2[6] = 'B'; numberfalse[6] = 0;   answer1[7] = 'd'; answer2[7] = 'D'; numberfalse[7] = 0;
    answer1[8] = 'a'; answer2[8] = 'A'; numberfalse[8] = 0;   answer1[9] = 'c'; answer2[9] = 'C'; numberfalse[9] = 0;
    cout << "PHAN MEM TRA LOI TRAC NHIEM\n[+]:Luyen tap\n[-]:Kiem tra\nChon che do:"; cin >> mode;                       /////////////////////
    if (mode == '-')                                                                                                    ///Che do luyen tap//
    {                                                                                                                  /////////////////////
        int point = 0;
        char answeruser[10];
        for (int i = 0; i < 10; i++)
        {
            cout << question[i];                                                                                     
            cout << "\nChon dap an dung:"; cin >> chose;
            answeruser[i] = chose;
            if (chose == answer1[i] || chose == answer2[i])
            {
                point++;
            }
        }
        cout << "Dap an tra loi.\n";
        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << "." << answeruser[i] << endl;
        }
        cout << "Diem: " << point;
    }                                                                                                                   ///////////////////
    else if (mode == '+')                                                                                              //Che do kiem tra//
    {                                                                                                                 ///////////////////

        for (int i = 0; i < 10; i++)
        {
            cout << question[i] << "\nChon dap an dung:"; cin >> chose;
            while (chose != answer1[i] && chose != answer2[i])
            {
                cout << "[SAI]-Chon lai: "; cin >> chose;
                numberfalse[i]++;
            }
            cout << "[DUNG]\n";
        }
        for (int i = 0; i < 10; i++)
        {
            cout << "\nSo lan sai cau"<< i + 1 <<":"<<numberfalse[i] << " " << "lan";
        }
    }
    cout << "\nDap an dung\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "." << answer2[i] << endl;
    }
}