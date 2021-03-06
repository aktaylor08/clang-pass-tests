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
  int _threshold;
  ros::Subscriber 	msg_sub;
  ros::Publisher 	msg_pub;
  ros::Publisher 	pub_2;
  bool check_val(int x);
};


Test::Test(void): private_nh_("~"){
    private_nh_.param("thresh_val", _threshold, 42);
	msg_pub = nh.advertise<std_msgs::Int16>("publish_topic", 2);
	msg_pub = nh.advertise<std_msgs::Int16>("other_topic", 2);
	msg_sub = nh.subscribe("give_me_info", 1, &Test::callbackSimple, this);
    count=0;
}



bool Test::check_val(int x){
         if(x > _threshold){
             return true;
         }else{
             return false;
         }
         
}

void Test::callbackSimple(const boost::shared_ptr<std_msgs::Int16 const> &in_msg)
{
    if(check_val(in_msg -> data)){
        std_msgs::Int16 out;
        out.data = 2;
        msg_pub.publish(out);
    }
    std_msgs::Int16 out;
    out.data = in_msg -> data - 2;
    msg_pub.publish(out);


}




int main(int argc, char **argv){
  ros::init(argc, argv, "Kalman");
  Test test;
  ros::spin();
  return 0;
}
