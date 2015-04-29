#include <ros/ros.h>
#include <std_msgs/Int16.h>

using namespace std;

class Test{
public:
  Test();
private:
  //Callbacks
  void callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &msg_in);
  ros::NodeHandle 	private_nh_;
  ros::NodeHandle 	nh;
  void pub_val(int);
  int _threshold;
  ros::Subscriber 	msg_sub;
  ros::Publisher 	msg_pub;
};


Test::Test(void): private_nh_("~"){
    private_nh_.param("thresh_val", _threshold, 42);
	msg_pub = nh.advertise<std_msgs::Int16>("publish_topic", 2);
	msg_sub = nh.subscribe("give_me_info", 1, &Test::callbackSimple, this);
}

void Test::pub_val(int value){
    std_msgs::Int16 msg;
    msg.data = value;
    msg_pub.publish(msg);
}


void Test::callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
    bool publish = false;
         if(in_msg-> data > _threshold){
             publish = true;
         }
         if(publish){
             pub_val(22);
         }
}

int main(int argc, char **argv){
  ros::init(argc, argv, "Kalman");
  Test test;
  ros::spin();
  return 0;
}
