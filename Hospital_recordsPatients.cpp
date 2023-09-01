#include<iostream>
#include<vector>
using namespace std;
class Patient{
    public:
    string patient_id;
    char gender;
    int age;
    struct patient;
    void print_gender;
    void print_age;
    Patient(string_id,char gen,int a) : patient_id(id),gender(gen), age(a){}
};
vector<Patient> accept_patient_data(int n){
    vector<Patient>patients;
    for(int i=0;i<n;++i){
        string patient_id;
        char gender;
        int age;
        
        cout << "Enter patients Id: ";
        cin >> patient_id;
        cout << "enter gender(1 for Male, 2 for Female): ";
        cin >> gender;
        cout << "Enter age: ";
        
        patients.push_back(Patients(patient_id,gender,age));
    }
    return patients;
}

