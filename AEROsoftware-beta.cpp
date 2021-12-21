#include <iostream>
#include <cmath>
#include <string>
void system_text();
void define_1();
void define_2();
void define_3();
void define_4();
void define_5();
void define_6();
double system_calculate_xi(double define_xi,
double define_yi,
double define_zi,
double define_psi);
void system_display_xi(double define_xi,
double define_yi,
double define_zi,
double define_psi);
double system_calculate_yi(double define_xi,
double define_yi,
double define_zi,
double define_psi);
void system_display_yi(double define_xi,
double define_yi,
double define_zi,
double define_psi);
void system_display_zi(double define_xi,
double define_yi,
double define_zi,
double define_psi);
double system_calculate_x2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta);
void system_display_x2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta);
double system_calculate_y2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta);
void system_display_y2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta);
double system_calculate_z2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta);
void system_display_z2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta);
double system_calculate_xbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void system_display_xbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
double system_calculate_ybody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void system_display_ybody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
double system_calculate_zbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void system_display_zbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void define_7();
void define_8();
void define_9();
/*angle functions*/
double system_angle_of_attack(double define_speed_u,
double define_speed_v,
double define_speed_w);
void display_angle_of_attack(double define_speed_u,
double define_speed_v,
double define_speed_w);
double system_angle_slide_slip(double define_speed_u,
double define_speed_v,
double define_speed_w);
void display_angle_slide_slip(double define_speed_u,
double define_speed_v,
double define_speed_w);
double system_velocity_magnitude(double define_speed_u,
double define_speed_v,
double define_speed_w);
void display_velocity_magnitude(double define_speed_u,
double define_speed_v,
double define_speed_w);
/*STABILITY AXIS*/
double system_stability_axis_Xst(double define_speed_u,
double define_speed_v,
double define_speed_w);
double system_stability_axis_Yst(double define_speed_u,
double define_speed_v,
double define_speed_w);
double system_stability_axis_Zst(double define_speed_u,
double define_speed_v,
double define_speed_w);

void display_xst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void display_yst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void display_zst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
/*WIND AXIS*/
double system_wind_axis_x(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
double system_wind_axis_y(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
double system_wind_axis_z(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);

void display_wind_axis_x(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void display_wind_axis_y(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
void display_wind_axis_z(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi);
int main () {
double define_xi;
double define_yi;
double define_zi;
double define_psi;
double define_theta;
double define_phi;
double define_speed_u;
double define_speed_v;
double define_speed_w;
bool system_conditions;
char user_argument;
system_conditions = true;
system("color 17");
while (system_conditions) {
  system_text();
  std::cout << "/@===========<<COORDINATE INFORMATIONS>>=============>>" << std::endl;
define_1();
std::cin >> define_xi;
define_2();
std::cin >> define_yi;
define_3();
std::cin >> define_zi;
std::cout << "/@===========<<AIRCRAFT VELOCITY INFORMATIONS>>=============>>" << std::endl;
define_7(); /*corrections for aircraft velocity*/
std::cin >> define_speed_u;
define_8(); /*corrections for aircraft velocity*/
std::cin >> define_speed_v;
define_9(); /*corrections for aircraft velocity*/
std::cin >> define_speed_w;
 display_velocity_magnitude( define_speed_u,
 define_speed_v,
 define_speed_w);
display_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w);
 display_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w);
 std::cout << "\n/@===========<<AIRCRAFT FRAME AXIS AND ANGLES INFORMATIONS>>=============>>" << std::endl;
define_4();
std::cin >> define_psi;
system_display_xi( define_xi,
 define_yi,
 define_zi,
 define_psi);
 system_display_yi( define_xi,
 define_yi,
 define_zi,
 define_psi);
 system_display_zi( define_xi,
 define_yi,
 define_zi,
 define_psi);
 define_5();
 std::cin >> define_theta;
 system_display_x2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
 system_display_y2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
 system_display_z2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
 define_6();
 std::cin >> define_phi;
 system_display_xbody( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta, define_phi);
 system_display_ybody( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta, define_phi);
 system_display_zbody( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta, define_phi);
 display_xst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 display_yst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 display_zst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);

  display_wind_axis_x( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 display_wind_axis_y( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 display_wind_axis_z( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);


 std::cout << "+++++++++++++++++++++++++ \n CONSOLE ALERT / NEXT CALCULATIONS? (y/n) >> " << std::endl;
 std::cin >> user_argument;
 if (user_argument == 'n') {
    break;
 } else {

 }
}
std::cin.get();
return 0;
}
void define_9(){
std::string system_lateral("CONSOLE MESSAGE / DEFINE w-velocity (Aircraft velocity in z-axis) >> ");
std::cout << system_lateral << std::endl;
return;
}
void define_8(){
std::string system_lateral("CONSOLE MESSAGE / DEFINE v-velocity (Aircraft velocity in y-axis) >> ");
std::cout << system_lateral << std::endl;
return;
}
void define_7(){
std::string system_lateral("CONSOLE MESSAGE / DEFINE u-velocity (Aircraft velocity in x-axis) >> ");
std::cout << system_lateral << std::endl;
return;
}
void system_text() {
    std::string system_lateral( "AFTERBASIC SYSTEM KERNEL VERSION 1.0.2.3 - BETA, 2021\n");
    std::cout << system_lateral << " \nTHIS IS A SOFTWARE THAT CALCULATE AIRCRAFT COORDINATE POSITION...\nAFTER A ROTATING IN THREE DIFFERENT ANGLE. COPYRIGHT 2021 AFTERBASIC, INC. \nANY SUGGESTION? | CONTACT : afterbasiccomputers@gmail.com\n \n++++++++++++++AFTERBASIC COMPUTERS | AEROSPACE++++++++++++++ \n" << std::endl;
return;
}
void define_1() {
std::string system_lateral("CONSOLE MESSAGE / DEFINE Xi coordinate >> ");
std::cout << system_lateral << std::endl;
return;
}
void define_2() {
std::string system_lateral("CONSOLE MESSAGE / DEFINE yi coordinate >> ");
std::cout << system_lateral << std::endl;
return;
}
void define_3() {
std::string system_lateral("CONSOLE MESSAGE / DEFINE zi coordinate >> ");
std::cout << system_lateral << std::endl;
return;
}
void define_4() {
std::string system_lateral("CONSOLE MESSAGE / DEFINE psi (azimuth) angle (degrees) 0*,+360* >> ");
std::cout << system_lateral << std::endl;
return;
}
void define_5() {
std::string system_lateral("CONSOLE MESSAGE / DEFINE theta (elevation) angle (degrees) -90*,+90* >> ");
std::cout << system_lateral << std::endl;
return;
}

void define_6() {
std::string system_lateral("CONSOLE MESSAGE / DEFINE phi (roll) angle (degrees) -180*,+180* >> ");
std::cout << system_lateral << std::endl;
return;
}

double system_calculate_xi(double define_xi,
double define_yi,
double define_zi,
double define_psi) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = cos(define_psi * (define_constant_pi / 180));
double define_matrix_a_1_2;
define_matrix_a_1_2 = sin(define_psi * (define_constant_pi / 180));
double define_matrix_a_1_3;
define_matrix_a_1_3 = 0;
double define_matrix_a_2_1;
define_matrix_a_2_1 = -sin(define_psi * (define_constant_pi / 180));
double define_matrix_a_2_2;
define_matrix_a_2_2 = cos(define_psi * (define_constant_pi / 180));
double define_matrix_a_2_3;
define_matrix_a_2_3 = 0;
double define_matrix_a_3_1;
define_matrix_a_3_1 = 0;
double define_matrix_a_3_2;
define_matrix_a_3_2 = 0;
double define_matrix_a_3_3;
define_matrix_a_3_3 = 1;
double define_matrix_b_1;
define_matrix_b_1 = define_xi;
double define_matrix_b_2;
define_matrix_b_2 = define_yi;
double define_matrix_b_3;
define_matrix_b_3 = define_zi;
double system_return_value;
system_return_value = (define_matrix_a_1_1 * define_matrix_b_1) + (define_matrix_a_1_2 * define_matrix_b_2) +
(define_matrix_a_1_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_xi(double define_xi,
double define_yi,
double define_zi,
double define_psi) {
std::string system_lateral("/+CONSOLE MESSAGE / X1=AXIS VALUE : ");
std::cout << system_lateral << system_calculate_xi( define_xi,
 define_yi,
 define_zi,
 define_psi) << std::endl;
return;
}
double system_calculate_yi(double define_xi,
double define_yi,
double define_zi,
double define_psi) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = cos(define_psi * (define_constant_pi / 180));
double define_matrix_a_1_2;
define_matrix_a_1_2 = sin(define_psi * (define_constant_pi / 180));
double define_matrix_a_1_3;
define_matrix_a_1_3 = 0;
double define_matrix_a_2_1;
define_matrix_a_2_1 = -sin(define_psi * (define_constant_pi / 180));
double define_matrix_a_2_2;
define_matrix_a_2_2 = cos(define_psi * (define_constant_pi / 180));
double define_matrix_a_2_3;
define_matrix_a_2_3 = 0;
double define_matrix_a_3_1;
define_matrix_a_3_1 = 0;
double define_matrix_a_3_2;
define_matrix_a_3_2 = 0;
double define_matrix_a_3_3;
define_matrix_a_3_3 = 1;
double define_matrix_b_1;
define_matrix_b_1 = define_xi;
double define_matrix_b_2;
define_matrix_b_2 = define_yi;
double define_matrix_b_3;
define_matrix_b_3 = define_zi;
double system_return_value;
system_return_value = (define_matrix_a_2_1 * define_matrix_b_1) + (define_matrix_a_2_2 * define_matrix_b_2) +
(define_matrix_a_2_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_yi(double define_xi,
double define_yi,
double define_zi,
double define_psi) {
std::string system_lateral("/+CONSOLE MESSAGE / Y1-AXIS VALUE : ");
std::cout << system_lateral << system_calculate_yi( define_xi,
 define_yi,
 define_zi,
 define_psi) << std::endl;
return;
}
double system_calculate_zi(double define_xi,
double define_yi,
double define_zi,
double define_psi) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = cos(define_psi * (define_constant_pi / 180));
double define_matrix_a_1_2;
define_matrix_a_1_2 = sin(define_psi * (define_constant_pi / 180));
double define_matrix_a_1_3;
define_matrix_a_1_3 = 0;
double define_matrix_a_2_1;
define_matrix_a_2_1 = -sin(define_psi * (define_constant_pi / 180));
double define_matrix_a_2_2;
define_matrix_a_2_2 = cos(define_psi * (define_constant_pi / 180));
double define_matrix_a_2_3;
define_matrix_a_2_3 = 0;
double define_matrix_a_3_1;
define_matrix_a_3_1 = 0;
double define_matrix_a_3_2;
define_matrix_a_3_2 = 0;
double define_matrix_a_3_3;
define_matrix_a_3_3 = 1;
double define_matrix_b_1;
define_matrix_b_1 = define_xi;
double define_matrix_b_2;
define_matrix_b_2 = define_yi;
double define_matrix_b_3;
define_matrix_b_3 = define_zi;
double system_return_value;
system_return_value = (define_matrix_a_3_1 * define_matrix_b_1) + (define_matrix_a_3_2 * define_matrix_b_2) +
(define_matrix_a_3_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_zi(double define_xi,
double define_yi,
double define_zi,
double define_psi) {
std::string system_lateral("/+CONSOLE MESSAGE / Z1-AXIS VALUE : ");
std::cout << system_lateral << system_calculate_zi( define_xi,
 define_yi,
 define_zi,
 define_psi) << std::endl;
return;
}
double system_calculate_x2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = cos(define_theta * (define_constant_pi / 180));
double define_matrix_a_1_2;
define_matrix_a_1_2 = 0;
double define_matrix_a_1_3;
define_matrix_a_1_3 = -sin(define_theta * (define_constant_pi / 180));
double define_matrix_a_2_1;
define_matrix_a_2_1 = 0;
double define_matrix_a_2_2;
define_matrix_a_2_2 = 1;
double define_matrix_a_2_3;
define_matrix_a_2_3 = 0;
double define_matrix_a_3_1;
define_matrix_a_3_1 = sin(define_theta * (define_constant_pi / 180));
double define_matrix_a_3_2;
define_matrix_a_3_2 = 0;
double define_matrix_a_3_3;
define_matrix_a_3_3 = cos(define_theta * (define_constant_pi / 180));
double define_matrix_b_1;
define_matrix_b_1 = system_calculate_xi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double define_matrix_b_2;
define_matrix_b_2 = system_calculate_yi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double define_matrix_b_3;
define_matrix_b_3 = system_calculate_zi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double system_return_value;
system_return_value = (define_matrix_a_1_1 * system_calculate_xi( define_xi,
 define_yi,
 define_zi,
 define_psi)) + (define_matrix_a_1_2 * system_calculate_yi( define_xi,
 define_yi,
 define_zi,
 define_psi)) +
(define_matrix_a_1_3 * system_calculate_zi( define_xi,
 define_yi,
 define_zi,
 define_psi));
return system_return_value;
}
void system_display_x2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta) {
std::string system_lateral("/+CONSOLE MESSAGE / X2-AXIS VALUE : ");
std::cout << system_lateral << system_calculate_x2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta) << std::endl;
return;
}
double system_calculate_y2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = cos(define_theta * (define_constant_pi / 180));
double define_matrix_a_1_2;
define_matrix_a_1_2 = 0;
double define_matrix_a_1_3;
define_matrix_a_1_3 = -sin(define_theta * (define_constant_pi / 180));
double define_matrix_a_2_1;
define_matrix_a_2_1 = 0;
double define_matrix_a_2_2;
define_matrix_a_2_2 = 1;
double define_matrix_a_2_3;
define_matrix_a_2_3 = 0;
double define_matrix_a_3_1;
define_matrix_a_3_1 = sin(define_theta * (define_constant_pi / 180));
double define_matrix_a_3_2;
define_matrix_a_3_2 = 0;
double define_matrix_a_3_3;
define_matrix_a_3_3 = cos(define_theta * (define_constant_pi / 180));
double define_matrix_b_1;
define_matrix_b_1 = system_calculate_xi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double define_matrix_b_2;
define_matrix_b_2 = system_calculate_yi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double define_matrix_b_3;
define_matrix_b_3 = system_calculate_zi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double system_return_value;
system_return_value = (define_matrix_a_2_1 * define_matrix_b_1) + (define_matrix_a_2_2 * define_matrix_b_2) +
(define_matrix_a_2_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_y2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta) {
std::string system_lateral("/+CONSOLE MESSAGE / Y2-AXIS VALUE : ");
std::cout << system_lateral << system_calculate_y2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta) << std::endl;
return;
}
double system_calculate_z2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = cos(define_theta * (define_constant_pi / 180));
double define_matrix_a_1_2;
define_matrix_a_1_2 = 0;
double define_matrix_a_1_3;
define_matrix_a_1_3 = -sin(define_theta * (define_constant_pi / 180));
double define_matrix_a_2_1;
define_matrix_a_2_1 = 0;
double define_matrix_a_2_2;
define_matrix_a_2_2 = 1;
double define_matrix_a_2_3;
define_matrix_a_2_3 = 0;
double define_matrix_a_3_1;
define_matrix_a_3_1 = sin(define_theta * (define_constant_pi / 180));
double define_matrix_a_3_2;
define_matrix_a_3_2 = 0;
double define_matrix_a_3_3;
define_matrix_a_3_3 = cos(define_theta * (define_constant_pi / 180));
double define_matrix_b_1;
define_matrix_b_1 = system_calculate_xi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double define_matrix_b_2;
define_matrix_b_2 = system_calculate_yi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double define_matrix_b_3;
define_matrix_b_3 = system_calculate_zi( define_xi,
 define_yi,
 define_zi,
 define_psi);
double system_return_value;
system_return_value = (define_matrix_a_3_1 * define_matrix_b_1) + (define_matrix_a_3_2 * define_matrix_b_2) +
(define_matrix_a_3_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_z2(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta) {
std::string system_lateral("/+CONSOLE MESSAGE / Z2-AXIS VALUE : ");
std::cout << system_lateral << system_calculate_z2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta) << std::endl;
return;
}

double system_calculate_xbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = 1;
double define_matrix_a_1_2;
define_matrix_a_1_2 = 0;
double define_matrix_a_1_3;
define_matrix_a_1_3 = 0;
double define_matrix_a_2_1;
define_matrix_a_2_1 = 0;
double define_matrix_a_2_2;
define_matrix_a_2_2 = cos(define_phi * (define_constant_pi / 180));
double define_matrix_a_2_3;
define_matrix_a_2_3 = sin(define_phi * (define_constant_pi / 180));
double define_matrix_a_3_1;
define_matrix_a_3_1 = 0;
double define_matrix_a_3_2;
define_matrix_a_3_2 = -sin(define_phi * (define_constant_pi / 180));
double define_matrix_a_3_3;
define_matrix_a_3_3 = cos(define_phi * (define_constant_pi / 180));
double define_matrix_b_1;
define_matrix_b_1 = system_calculate_x2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double define_matrix_b_2;
define_matrix_b_2 = system_calculate_y2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double define_matrix_b_3;
define_matrix_b_3 = system_calculate_z2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double system_return_value;
system_return_value = (define_matrix_a_1_1 * define_matrix_b_1) + (define_matrix_a_1_2 * define_matrix_b_2) +
(define_matrix_a_1_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_xbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE | XBODY-AXIS (ROLL) VALUE : ");
std::cout << system_lateral << system_calculate_xbody( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta, define_phi) << std::endl;
return;
}
double system_calculate_ybody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;
define_matrix_a_1_1 = 1;
double define_matrix_a_1_2;
define_matrix_a_1_2 = 0;
double define_matrix_a_1_3;
define_matrix_a_1_3 = 0;
double define_matrix_a_2_1;
define_matrix_a_2_1 = 0;
double define_matrix_a_2_2;
define_matrix_a_2_2 = cos(define_phi * (define_constant_pi / 180));
double define_matrix_a_2_3;
define_matrix_a_2_3 = sin(define_phi * (define_constant_pi / 180));
double define_matrix_a_3_1;
define_matrix_a_3_1 = 0;
double define_matrix_a_3_2;
define_matrix_a_3_2 = -sin(define_phi * (define_constant_pi / 180));
double define_matrix_a_3_3;
define_matrix_a_3_3 = cos(define_phi * (define_constant_pi / 180));
double define_matrix_b_1;
define_matrix_b_1 = system_calculate_x2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double define_matrix_b_2;
define_matrix_b_2 = system_calculate_y2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double define_matrix_b_3;
define_matrix_b_3 = system_calculate_z2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double system_return_value;
system_return_value = (define_matrix_a_2_1 * define_matrix_b_1) + (define_matrix_a_2_2 * define_matrix_b_2) +
(define_matrix_a_2_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_ybody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE | YBODY-AXIS (ROLL) VALUE : ");
std::cout << system_lateral << system_calculate_ybody( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta, define_phi) << std::endl;
return;
}
double system_calculate_zbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double define_constant_pi;
define_constant_pi = atan(1) * (4);
double define_matrix_a_1_1;

define_matrix_a_1_1 = 1;
double define_matrix_a_1_2;
define_matrix_a_1_2 = 0;
double define_matrix_a_1_3;
define_matrix_a_1_3 = 0;
double define_matrix_a_2_1;
define_matrix_a_2_1 = 0;
double define_matrix_a_2_2;
define_matrix_a_2_2 = cos(define_phi * (define_constant_pi / 180));
double define_matrix_a_2_3;
define_matrix_a_2_3 = sin(define_phi * (define_constant_pi / 180));
double define_matrix_a_3_1;
define_matrix_a_3_1 = 0;
double define_matrix_a_3_2;
define_matrix_a_3_2 = -sin(define_phi * (define_constant_pi / 180));
double define_matrix_a_3_3;
define_matrix_a_3_3 = cos(define_phi * (define_constant_pi / 180));
double define_matrix_b_1;
define_matrix_b_1 = system_calculate_x2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double define_matrix_b_2;
define_matrix_b_2 = system_calculate_y2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double define_matrix_b_3;
define_matrix_b_3 = system_calculate_z2( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta);
double system_return_value;
system_return_value = (define_matrix_a_3_1 * define_matrix_b_1) + (define_matrix_a_3_2 * define_matrix_b_2) +
(define_matrix_a_3_3 * define_matrix_b_3);
return system_return_value;
}
void system_display_zbody(double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE | ZBODY-AXIS (ROLL) VALUE : ");
std::cout << system_lateral << system_calculate_zbody( define_xi,
 define_yi,
 define_zi,
 define_psi, define_theta, define_phi) << std::endl;
return;
}
double system_angle_of_attack(double define_speed_u,
double define_speed_v,
double define_speed_w) {
double define_constant_pi;
define_constant_pi = atan(1) * 4;
double system_return_value;
system_return_value = atan((define_speed_w/define_speed_u)) * (180/define_constant_pi);
return system_return_value;
}
void display_angle_of_attack(double define_speed_u,
double define_speed_v,
double define_speed_w) {
std::string system_lateral("/+CONSOLE MESSAGE / ANGLE OF ATTACK VALUE : ");
std::cout << system_lateral << system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w) << " (degrees)" << std::endl;
return;
}
double system_velocity_magnitude(double define_speed_u,
double define_speed_v,
double define_speed_w) {
double first_parameter;
first_parameter = (define_speed_u * define_speed_u) + (define_speed_v * define_speed_v) + (
define_speed_w * define_speed_w);
double system_squared;
system_squared = sqrt(first_parameter);
return system_squared;

}
void display_velocity_magnitude(double define_speed_u,
double define_speed_v,
double define_speed_w) {
std::string system_lateral("/+CONSOLE MESSAGE / THE MAGNITUDE VELOCITY OF AIRCRAFT IS ");
std::cout << system_lateral << system_velocity_magnitude( define_speed_u,
 define_speed_v,
 define_speed_w) << std::endl;
return;
}
double system_angle_slide_slip(double define_speed_u,
double define_speed_v,
double define_speed_w) {
double define_constant_pi;
define_constant_pi = atan(1) * 4;
double system_return_value;
system_return_value = asin((define_speed_v/system_velocity_magnitude( define_speed_u,
 define_speed_v,
 define_speed_w))) * (180/define_constant_pi);
return system_return_value;
}
void display_angle_slide_slip(double define_speed_u,
double define_speed_v,
double define_speed_w) {
std::string system_lateral("/+CONSOLE MESSAGE / SLIDE-SLIP ANGLE VALUE : ");
std::cout << system_lateral << system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w) << " (degrees)" << std::endl;
return;
}
double system_stability_axis_Xst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double define_constant_pi;
define_constant_pi = atan(1) * 4;
double system_a11;
system_a11 = cos(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a12;
system_a12 = 0;
double system_a13;
system_a13 = sin(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a21;
system_a21 = 0;
 double system_a22;
system_a22 = 1;
double system_a23;
system_a23 = 0;
double system_a31;
system_a31 = -sin(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a32;
system_a32 = 0;
double system_a33;
system_a33 = cos(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double define_matrix_b1 = system_calculate_xbody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double define_matrix_b2 = system_calculate_ybody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double define_matrix_b3 = system_calculate_zbody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_return_value = (system_a11 * define_matrix_b1) + (system_a12 * define_matrix_b2) + (system_a13 * define_matrix_b3);
return system_return_value;
}
double system_stability_axis_Yst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double define_constant_pi;
define_constant_pi = atan(1) * 4;
double system_a11;
system_a11 = cos(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a12;
system_a12 = 0;
double system_a13;
system_a13 = sin(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a21;
system_a21 = 0;
 double system_a22;
system_a22 = 1;
double system_a23;
system_a23 = 0;
double system_a31;
system_a31 = -sin(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a32;
system_a32 = 0;
double system_a33;
system_a33 = cos(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double define_matrix_b1 = system_calculate_xbody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double define_matrix_b2 = system_calculate_ybody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double define_matrix_b3 = system_calculate_zbody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_return_value = (system_a21 * define_matrix_b1) + (system_a22 * define_matrix_b2) + (system_a23 * define_matrix_b3);
return system_return_value;
}
double system_stability_axis_Zst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double define_constant_pi;
define_constant_pi = atan(1) * 4;
double system_a11;
system_a11 = cos(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a12;
system_a12 = 0;
double system_a13;
system_a13 = sin(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a21;
system_a21 = 0;
 double system_a22;
system_a22 = 1;
double system_a23;
system_a23 = 0;
double system_a31;
system_a31 = -sin(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double system_a32;
system_a32 = 0;
double system_a33;
system_a33 = cos(system_angle_of_attack( define_speed_u,
 define_speed_v,
 define_speed_w * (define_constant_pi/180)));
 double define_matrix_b1 = system_calculate_xbody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double define_matrix_b2 = system_calculate_ybody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double define_matrix_b3 = system_calculate_zbody( define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_return_value = (system_a31 * define_matrix_b1) + (system_a32 * define_matrix_b2) + (system_a33 * define_matrix_b3);
return system_return_value;
}
void display_xst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE / X-AXIS STABILITY VALUE >> ");
std::cout << system_lateral << system_stability_axis_Xst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi) << std::endl;
return;
}
void display_yst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE / Y-AXIS STABILITY VALUE >> ");
std::cout << system_lateral << system_stability_axis_Yst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi) << std::endl;
return;
}
void display_zst(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE / Z-AXIS STABILITY VALUE >> ");
std::cout << system_lateral << system_stability_axis_Zst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi) << std::endl;
return;
}
double system_wind_axis_x(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double system_define_pi;
system_define_pi = atan(1) * 4;
double system_define_matrix_a11;
system_define_matrix_a11 = cos((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a12;
system_define_matrix_a12 = sin((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a13;
system_define_matrix_a13 = 0;
double system_define_matrix_a21;
system_define_matrix_a21 = -sin((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a22;
system_define_matrix_a22 = cos((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a23;
system_define_matrix_a23 = 0;
double system_define_matrix_a31;
system_define_matrix_a31 = 0;
 double system_define_matrix_a32;
system_define_matrix_a32 = 0;
 double system_define_matrix_a33;
system_define_matrix_a33 = 1;

double system_matrix_b1;
system_matrix_b1 = system_stability_axis_Xst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_matrix_b2;
system_matrix_b2 = system_stability_axis_Yst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_matrix_b3;
system_matrix_b3 = system_stability_axis_Zst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
double system_return_value;
system_return_value = (system_define_matrix_a11 * system_matrix_b1) + (system_define_matrix_a12 * system_matrix_b2)
  + (system_define_matrix_a13 * system_matrix_b3);

 return system_return_value;


}
double system_wind_axis_y(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double system_define_pi;
system_define_pi = atan(1) * 4;
double system_define_matrix_a11;
system_define_matrix_a11 = cos((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a12;
system_define_matrix_a12 = sin((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a13;
system_define_matrix_a13 = 0;
double system_define_matrix_a21;
system_define_matrix_a21 = -sin((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a22;
system_define_matrix_a22 = cos((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a23;
system_define_matrix_a23 = 0;
double system_define_matrix_a31;
system_define_matrix_a31 = 0;
 double system_define_matrix_a32;
system_define_matrix_a32 = 0;
 double system_define_matrix_a33;
system_define_matrix_a33 = 1;

double system_matrix_b1;
system_matrix_b1 = system_stability_axis_Xst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_matrix_b2;
system_matrix_b2 = system_stability_axis_Yst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_matrix_b3;
system_matrix_b3 = system_stability_axis_Zst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
double system_return_value;
system_return_value = (system_define_matrix_a21 * system_matrix_b1) + (system_define_matrix_a22 * system_matrix_b2)
  + (system_define_matrix_a23 * system_matrix_b3);

 return system_return_value;


}

double system_wind_axis_z(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
double system_define_pi;
system_define_pi = atan(1) * 4;
double system_define_matrix_a11;
system_define_matrix_a11 = cos((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a12;
system_define_matrix_a12 = sin((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a13;
system_define_matrix_a13 = 0;
double system_define_matrix_a21;
system_define_matrix_a21 = -sin((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a22;
system_define_matrix_a22 = cos((system_angle_slide_slip( define_speed_u,
 define_speed_v,
 define_speed_w)) * (system_define_pi/180));
 double system_define_matrix_a23;
system_define_matrix_a23 = 0;
double system_define_matrix_a31;
system_define_matrix_a31 = 0;
 double system_define_matrix_a32;
system_define_matrix_a32 = 0;
 double system_define_matrix_a33;
system_define_matrix_a33 = 1;

double system_matrix_b1;
system_matrix_b1 = system_stability_axis_Xst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_matrix_b2;
system_matrix_b2 = system_stability_axis_Yst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
 double system_matrix_b3;
system_matrix_b3 = system_stability_axis_Zst( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi);
double system_return_value;
system_return_value = (system_define_matrix_a31 * system_matrix_b1) + (system_define_matrix_a32 * system_matrix_b2)
  + (system_define_matrix_a33 * system_matrix_b3);

 return system_return_value;


}
void display_wind_axis_x(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE / WIND X-AXIS VALUE : ");
std::cout << system_lateral << system_wind_axis_x( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi) << std::endl;
return;
}
void display_wind_axis_y(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE / WIND Y-AXIS VALUE : ");
std::cout << system_lateral << system_wind_axis_y( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi) << std::endl;
return;
}
void display_wind_axis_z(double define_speed_u,
double define_speed_v,
double define_speed_w, double define_xi,
double define_yi,
double define_zi,
double define_psi, double define_theta, double define_phi) {
std::string system_lateral("/+CONSOLE MESSAGE / WIND Z-AXIS VALUE : ");
std::cout << system_lateral << system_wind_axis_z( define_speed_u,
 define_speed_v,
 define_speed_w,  define_xi,
 define_yi,
 define_zi,
 define_psi,  define_theta,  define_phi) << std::endl;
return;
}









