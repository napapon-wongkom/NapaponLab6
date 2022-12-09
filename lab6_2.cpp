#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double deg){
    double rad = deg*(M_PI/180);
    return rad;
}

double rad2deg(double rad){
    double deg = rad*(180/M_PI);
    return deg;
}

double findXComponent(double lengthX_A,double lengthX_B,double radX_A,double radX_B){
    double vectorX = (lengthX_A*cos(radX_A))+(lengthX_B*cos(radX_B));
    return vectorX;
}

double findYComponent(double lengthY_A,double lengthY_B,double radY_A,double radY_B){
    double vectorY = (lengthY_A*sin(radY_A))+(lengthY_B*sin(radY_B));
    return vectorY;
}

double pythagoras(double Axis_X,double Axis_Y){
    double pytha = sqrt(pow(Axis_X,2)+pow(Axis_Y,2));
    return pytha;
}

double showResult(double result_length,double result_angle){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<"\n";
    cout<<"Length of the resultant vector = " << result_length << "\n";
    cout<<"Direction of the resultant vector (deg) = " << result_angle << "\n";
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    return 0;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
