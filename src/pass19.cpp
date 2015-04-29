#include <ros/ros.h>
#include <std_msgs/Int16.h>

using namespace std;

class Test{
public:
  Test();
private:
  //Callbacks
  void callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &msg_in);
  void callbackSimple2(const boost::shared_ptr<std_msgs::Int16 const> &msg_in);
  void publishValue(int value);
  void preparePublish();
  ros::NodeHandle 	private_nh_;
  ros::NodeHandle 	nh;
  int _threshold;
  int _thresh2;
  bool okay;
  ros::Subscriber 	msg_sub;
  ros::Subscriber 	msg_sub2;
  ros::Publisher 	msg_pub;
};


Test::Test(void): private_nh_("~"){
    private_nh_.param("thresh_val", _threshold, 42);
    private_nh_.param("thresh_val2", _thresh2, 22);
	msg_pub = nh.advertise<std_msgs::Int16>("publish_topic", 2);
	msg_sub = nh.subscribe("give_me_info", 1, &Test::callbackSimple, this);
	msg_sub2 = nh.subscribe("give_me_info", 1, &Test::callbackSimple2, this);
    okay = false;
}


void Test::callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
         if(in_msg-> data > _threshold){
             preparePublish();
         }
}

void Test::callbackSimple2(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
         if(in_msg-> data > _thresh2){
             okay = true;
         }
}

void Test::publishValue(int value){
    std_msgs::Int16 msg;
    msg.data = 42;
    msg_pub.publish(msg);
}

void Test::preparePublish(){
    value = 0;
    for(int i=0;i< 22; i++){
        value++;
    }
    if(okay){
        publishValue(value);
    }
}


int main(int argc, char **argv){
  ros::init(argc, argv, "Kalman");
  Test test;
  ros::spin();
  return 0;
}
