#include <iostream>
using namespace std;

class Teacher {
public:
    int n;
    char ch;

    void get() {
        cout << "           College Faculty Search System" << endl <<endl;
        cout << "      Welcome to Computer Technology Department" << endl;
        cout << "-----------------------------------------------------" << endl << endl;
        cout << "----------------------" << endl;
        cout << "|    !! SEARCH !!    |" << endl;
        cout << "----------------------" << endl;

        do {
            cout << "Enter Employee id: ";
            cin >> n;

            cout << endl;

            switch (n) {
                case 1:
                    cout << "Name           : Mrs. Anjalee.V. Kurkute" << endl;
                    cout << "Designation    : HOD" << endl;
                    cout << "Qualification  : M.E (Comp)" << endl;
                    cout << "Specialization : Networking, Operating System" << endl;
                    cout << "Experience     : 30 Years" << endl;
                    break;

                case 2:
                    cout << "Name           : Mrs. Swpnali.L. Mali" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (Data Science)" << endl;
                    cout << "Specialization : Data Science, Data Analytics, Python" << endl;
                    cout << "Experience     : 2.4 Years" << endl;
                    break;

                case 3:
                    cout << "Name           : Mrs. Sujata.A. Kshirsagar" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (Comp)" << endl;
                    cout << "Specialization : DBMS, Programming" << endl;
                    cout << "Experience     : 7 Years" << endl;
                    break;

                case 4:
                    cout << "Name           : Mrs. Sheetal.K. Kawale" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.Tech (IT)" << endl;
                    cout << "Specialization : Networking, Coding, Data Structure, Big Data, Cloud                     Computing" << endl;
                    cout << "Experience     : 9 Years" << endl;
                    break;

                case 5:
                    cout << "Name           : Mrs. Priyanka.K. Javkar" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (Comp)" << endl;
                    cout << "Specialization : C, C++, C#, .NET, ASP" << endl;
                    cout << "Experience     : 7 Years" << endl;
                    break;

                case 6:
                    cout << "Name           : Mrs. Kajal.G. Raut" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (IT)" << endl;
                    cout << "Specialization : Computer Networking, Python" << endl;
                    cout << "Experience     : 2 Years" << endl;
                    break;

                case 7:
                    cout << "Name           : Mrs. Sampada.S. Kadam" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (IT)" << endl;
                    cout << "Specialization : Networking, Operating System" << endl;
                    cout << "Experience     : 18 Years" << endl;
                    break;

                case 8:
                    cout << "Name           : Mrs. Sunita.S. Velapure" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (IT)" << endl;
                    cout << "Specialization : Networking" << endl;
                    cout << "Experience     : 17 Years" << endl;
                    break;

                case 9:
                    cout << "Name           : Mrs. Arati.S. Patil" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (Comp)" << endl;
                    cout << "Specialization : Cloud Computing, C Language, Digital Technique" << endl;
                    cout << "Experience     : 3 Years" << endl;
                    break;

                case 10:
                    cout << "Name           : Ms. Anuja.D. Mate" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (Comp)" << endl;
                    cout << "Specialization : Software Testing, Development, Android App Development,                 Agile Methodologies, SQL" << endl;
                    cout << "Experience     : 3 Years" << endl;
                    break;

                case 11:
                    cout << "Name           : Ms. Priti.B. Borate" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : B.E (Comp Engg)" << endl;
                    cout << "Specialization : Programming Subjects" << endl;
                    cout << "Experience     : 1 Year" << endl;
                    break;

                case 12:
                    cout << "Name           : Ms. Gauri.K. Kharat" << endl;
                    cout << "Designation    : Lecturer" << endl;
                    cout << "Qualification  : M.E (Data Science)" << endl;
                    cout << "Specialization : Data Analytics, Machine Learning, NLP, Deep Learning" << endl;
                    cout << "Experience     : 2.5 Year" << endl;
                    break;

                default:
                    cout << "Invalid Employee id !!" << endl;
            }
 
            cout<<endl;
            cout << "Do you want to know about another faculty?"<<endl<<"Enter 'y' for yes and any other key for no: ";
            cin >> ch;
            cout << endl;

        } while (ch == 'y' || ch == 'Y');
        
        cout << "Thank you for using the search system!" << endl;
    }
};

int main() {
    Teacher t;
    t.get();
    return 0;
}