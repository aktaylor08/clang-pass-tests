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
  ros::NodeHandle 	private_nh_;
  ros::NodeHandle 	nh;
  int val1;
  int val2;
  ros::Subscriber 	msg_sub;
  ros::Subscriber 	msg_sub2;
  ros::Publisher 	msg_pub;
};


Test::Test(void): private_nh_("~"){
    val1 = 0;
    val2 = 100;
	msg_pub = nh.advertise<std_msgs::Int16>("publish_topic", 2);
	msg_sub = nh.subscribe("give_me_info", 1, &Test::callbackSimple, this);
	msg_sub2 = nh.subscribe("other_sub", 1, &Test::callbackSimple2, this);
}


void Test::callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
         if(in_msg-> data > val1){
             if(in_msg -> data < _threshold2){
                std_msgs::Int16 msg;
                msg.data = 42;
                msg_pub.publish(msg);
             }
         }
}

void Test::callbackSimple2(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
    val1++;
    val2--;
    val2 %= 100;
    val1 %= 100;
}

int main(int argc, char **argv){
  ros::init(argc, argv, "Kalman");
  Test test;
  ros::spin();
  return 0;
}
