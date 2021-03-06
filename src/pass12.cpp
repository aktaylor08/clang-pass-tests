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
  int _threshold2;
  int count;
  ros::Subscriber 	msg_sub;
  ros::Publisher 	msg_pub;
  bool pub_now;
  int val;
};


Test::Test(void): private_nh_("~"){
    private_nh_.param("thresh_val", _threshold, 42);
    private_nh_.param("second_threshold", _threshold2, 18);
	msg_pub = nh.advertise<std_msgs::Int16>("publish_topic", 2);
	msg_sub = nh.subscribe("give_me_info", 1, &Test::callbackSimple, this);
    val = 0;
    count = 0;
}


void Test::publish_value(int to_pub){
    int x = 9;
}


void Test::main_loop(){
    ros::Rate r(10);
    while(ros::ok()){
        count++;
        if(val < count){
            std_msgs::Int16 msg;
            msg.data = val;
            msg_pub.publish(msg);
        }
        ros::spinOnce();
        r.sleep();
    }
}

void Test::callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
         if(in_msg-> data > _threshold){
             val = 10;
         }else{
             val = 42;
         }
}




int main(int argc, char **argv){
  ros::init(argc, argv, "Kalman");
  Test test;
  test.main_loop();
  return 0; }
