#ifndef VARIABLE_CONFIG_HPP
#define VARIABLE_CONFIG_HPP



using namespace std;

// timesurface parameters
inline constexpr float tau_in = 0.4;
inline constexpr float phi_in = 0.85;
inline constexpr int R_in = 7;
inline constexpr int L_in = 10;
inline constexpr int ROI = 2*R_in + 1;
// 'inline' prevents compiler multiple definition errors
// 'constexpr' allows use to define array dimensions



#endif