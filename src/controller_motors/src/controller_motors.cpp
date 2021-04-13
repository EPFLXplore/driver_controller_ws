#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/PointCloud2.h"
#include "sensor_msgs/Image.h"
#include <string>
#include "message_filters/subscriber.h"
#include "message_filters/time_synchronizer.h"
#include "message_filters/cache.h"



#include <iostream>
#include <chrono>
#include <thread>
#include <pthread.h>
#include <sys/mman.h>
#include <pid/signal_manager.h>

#include <ethercatcpp/master.h>
#include <ethercatcpp/epos4.h>

using namespace std;
using namespace std::chrono;
using namespace ethercatcpp;
using namespace pid;


using namespace message_filters;
using namespace sensor_msgs;


int main(int argc, char **argv){

    ros::init(argc, argv, "controller_motor");

    cout << "here we go !!!!!!" << endl;

    ros::NodeHandle n;

    Epos4 epos_1;
    
    ros::spin();

    return 0;

}