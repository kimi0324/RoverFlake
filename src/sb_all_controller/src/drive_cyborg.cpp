/*
 * Created By: Kevin Lin
 * Created On: February 29th, 2020
 * Description: The node that listens to switch pro controller and publishes
 * twist messages
 */

#include "../include/DriveCyborg.h"

int main(int argc, char** argv) {
    // Setup your ROS node
    std::string node_name = "drive_controller";

    // Create an instance of your class
    DriveController drive_control(argc, argv, node_name);

    // Start up ros. This will continue to run until the node is killed
    ros::spin();

    // Once the node stops, return 0
    return 0;
}
