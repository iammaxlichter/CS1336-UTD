#include <iostream>
#include <iomanip>

using namespace std;


float Patient(int Days, float Rate, float MedicalCharges, float HospitalCharges);
float Patient(float MedicalCharges, float HospitalCharges);


int main() {
                int dog = 0;
                char ans;
                do{
                    cout << "What was the patient type? ";
                    cin >> ans;

                    if(ans == 'I' || ans == 'i'){
                        int Days;
                        float Rate, MedicalCharges, HospitalCharges, Total;

                        cout << "Number of days in the hospital: ";
                        cin >> Days;
                        if (Days <= 0){
                            do{
                                cout << "Days in hospital must be zero or more. Please re-enter: ";
                                cin >> Days;
                            } while (Days <= 0);
                        }


                        cout << "Daily room rate: $";
                        cin >> Rate;
                        if (Rate <= 0){
                            do{
                                cout << "Room rate must be above zero. Please re-enter: $";
                                cin >> Rate;
                            } while (Rate <= 0);
                        }


                        cout << "Medication charges: ";
                        cin >> MedicalCharges;
                        if (MedicalCharges <= 0){
                            do{
                                cout << "Medication charges must be above zero. Please re-enter: $";
                                cin >> MedicalCharges;
                            } while (MedicalCharges <= 0);
                        }

                        cout << "Lab fees and other service charges: ";
                        cin >> HospitalCharges;
                        if (HospitalCharges <= 0){
                            do{
                                cout << "Lab fees and other service charges must be above zero. Please re-enter: $";
                                cin >> HospitalCharges;
                            } while (HospitalCharges <= 0);
                        }


                        Total = Patient(Days, Rate, MedicalCharges, HospitalCharges);
                        cout << "Patient total charges $" << Total;
                        cout<<endl;
                        break;
                        }

                    else if(ans == 'O' || ans == 'o') {
                        float MedicalCharges, HospitalCharges, Total;

                        cout << "Hospital  medication charges: ";
                        cin >> MedicalCharges;
                        cout << endl;

                        cout << "Charges for hospital services: ";
                        cin >> HospitalCharges;
                        cout << endl;

                        Total = Patient(MedicalCharges, HospitalCharges);
                        cout << "Patient total charges $" << Total;
                        cout << endl;
                        break;
                        }


                }while (dog != 1);

                return 0;
}

float Patient(float MedicalCharges, float HospitalCharges){
                float TotalCharges;

                if(MedicalCharges < 0 || HospitalCharges < 0){
                    cout<<"Only Positive Number Allowed";
                    cout<<endl;
                    }

                TotalCharges = MedicalCharges + HospitalCharges;

                return TotalCharges;
}

float Patient(int Days, float Rate, float MedicalCharges, float HospitalCharges){
                float TotalCharges, Temperature;

                if(MedicalCharges < 0 || HospitalCharges < 0 || Rate < 0 || Days < 0){
                    cout << "Only Positive Number Allowed";
                    cout << endl;
                    }

                Temperature = MedicalCharges + HospitalCharges;
                TotalCharges = Days * Rate;
                TotalCharges += Temperature;

                return TotalCharges;

}


