#include <ros/ros.h>
#include <std_msgs/Int16.h>

using namespace std;

class Test{
public:
  Test();
  void main_loop();

private:

  //Callbacks
  void callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &msg_in);
  void publish_value(int);
  ros::NodeHandle 	private_nh_;
  ros::NodeHandle 	nh;
  int _threshold;
  bool okay;
  ros::Subscriber 	msg_sub;
  ros::Publisher 	msg_pub;
  bool pub_now;
  int val;
};


Test::Test(void): private_nh_("~"){
    private_nh_.param("thresh_val", _threshold, 42);
	msg_pub = nh.advertise<std_msgs::Int16>("publish_topic", 2);
	msg_sub = nh.subscribe("give_me_info", 1, &Test::callbackSimple, this);
    val = 0;
    okay = false;
}


void Test::publish_value(int to_pub){
    std_msgs::Int16 msg;
    msg.data = to_pub;
    msg_pub.publish(msg);
}


void Test::main_loop(){
    ros::Rate r(10);
    while(ros::ok()){
        if(okay){
            publish_value(13);
        }
        ros::spinOnce();
        r.sleep();
    }
}

void Test::callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
         if(in_msg-> data > _threshold){
             okay = true;
         }
}




int main(int argc, char **argv){
  ros::init(argc, argv, "Kalman");
  Test test;
  test.main_loop();
  return 0; 
}
