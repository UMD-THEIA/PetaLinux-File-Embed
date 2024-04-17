#ifndef FILEPATH_CONFIG_HPP
#define FILEPATH_CONFIG_HPP



using namespace std;

// duration to wait until starting Metavision::Camera object
int start_delay = 1;
// source recording.raw path
string rec_path = "/home/jwulff/Desktop/Pipeline-Development/input_resources/ctyrec1_slew4_5s.raw";
// source recording.raw nickname
string rec_name = "Courtyards Rec. 1, Slew 4, 5 seconds";
// saved recording.raw path (will just duplicate original recording)
string output_path = "/home/jwulff/Desktop/Pipeline-Development/cpp/processing+driver/asynchronous_timesurface_test/asynchronous_timesurface_test__recent.raw";



#endif