import rclpy
from turtlesim.msg import Pose
from turtlesim.srv import Spawn, SetPen, Kill
from geometry_msgs.msg import Twist
import random
import math
from functools import partial
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor

turtle1_pose = Pose()
turtlelist = []
lastTurtle = 1
nextturtleIndex = 1
count=0
    

# class TurtleSnake(Node):
#     def __init__(self):
#         super().__init__("turtle_snake")
#         self.__turtle_list = []
#         self.__turtle_count = 1

#         # First turtle is the master turtle
#         self.__turtle1_pose_sub = self.create_subscription(Pose,'/turtle1/pose',self.__turtle1_pose_callback, 10)
#         self.__turtle1_vel_pub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
#         self.__spawn_client = self.create_client(Spawn, 'spawn')

#         # Spawn another turtle
#         self.__spawn_turtle('turtle2')

#     def __turtle1_pose_callback(self, msg):
#         pass

#     def __spawn_turtle(self, turtle_name):
#         while not self.__spawn_client.wait_for_service(1):
#             self.get_logger().warn("waiting for service...")
        
#         request = Spawn.Request()
#         request.name = turtle_name
#         x = random.randint(1, 10); y = random.randint(1, 10); theta = random.uniform(0.0, 2*math.pi)
#         request.x = float(x)
#         request.y = float(y)
#         request.theta = theta

#         future = self.__spawn_client.call_async(request)
#         future.add_done_callback(partial(self.__callback_call_spawn, turtle_name = turtle_name))
    
#     def __callback_call_spawn(self, future, turtle_name):
#         try:
#             response = future.result()
#             if response.name!="":
#                 self.get_logger().info("Turtle "+turtle_name+" is now alive")
#                 self.__turtle_count+=1
#                 turtle = Turtle(turtle_name)
#                 self.__turtle_list.append(turtle)

#         except Exception as e:
#             self.get_logger().error("service failed: %r"%(e,))


# class Turtle(TurtleSnake):
#     def __init__(self,turtle_name):
#         self.turtle_name = turtle_name
#         self.pose_sub = self.create_subscription(Pose,'/'+turtle_name+'/pose',self.turtle_pose_callback, 10)
#         self.vel_pub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
    
#     def turtle_pose_callback(self, msg):
#         self.pose = msg

# def main(args=None):
#     rclpy.init(args=args)
#     node = TurtleSnake()
#     rclpy.spin(node)
#     rclpy.shutdown()




class mySpawner:
    def __init__(self, node, tname):
        self.turtle_name = tname
        self.state = 1
        self.node = node 
        client = self.node.create_client(Spawn, 'spawn')
        while not client.wait_for_service(1):
            node.get_logger().warn("waiting for service...")
        
        request = Spawn.Request()
        request.name = self.turtle_name
        x = random.randint(1, 10); y = random.randint(1, 10); theta = random.uniform(0.0, 2*math.pi)
        request.x = float(x)
        request.y = float(y)
        request.theta = theta

        future = client.call_async(request)
        future.add_done_callback(self.callback_callSpawn)


        
        self.node.create_subscription(Pose, self.turtle_name+'/pose', self.turtle_poseCallback, 10)
        self.pub = self.node.create_publisher(Twist, self.turtle_name+"/cmd_vel", 10)
        self.turtle_to_follow = 1
        self.turtle_pose = Pose()
    
    def kill(self):
        client = self.node.create_client(Kill, 'kill')
        while not client.wait_for_service(1):
            self.get_logger().warn("waiting for service...")
        
        request = Kill.Request()
        request.name = self.turtle_name
        future=client.call_async(request)
        future.add_done_callback(partial(self.callback_kill,turtle_name = self.turtle_name))

    def callback_kill(self, future, turtle_name):
        try:
            future.result()
            self.node.get_logger().info("Removed turtle: "+turtle_name)

        except Exception as e:
            self.node.get_logger().error("service failed: %r"%(e,))


    def off_pen(self):
        client2 = self.node.create_client(SetPen, '/'+self.turtle_name+'/set_pen')
        while not client2.wait_for_service(1):
            node.get_logger().warn("waiting for SetPen service...")
        
        request2 = SetPen.Request()
        request2.r = 0; request2.g = 0; request2.b = 0; request2.width = 0; request2.off = 1

        future2 = client2.call_async(request2)
        future2.add_done_callback(self.callback_callSetPen)

    def callback_callSetPen(self, future):
        try:
            response = future.result()  
        except Exception as e:
            self.node.get_logger().error("service failed: %r"%(e,))
    
    def callback_callSpawn(self,future):
        try:
            response = future.result()
            if response.name!="":
                self.node.get_logger().info("Turtle "+self.turtle_name+" is now alive")
                self.off_pen()
        except Exception as e:
            self.node.get_logger().error("service failed: %r"%(e,))

    def turtle_poseCallback(self, data):
        self.turtle_pose = data
    
    def turtle_velocity(self, msg):
        self.pub.publish(msg)

def turtle1_poseCallback(data):
    global turtle1_pose
    global lastTurtle
    global turtlelist
    global nextturtleIndex
    global count
    count+=1
    # node.get_logger().info("Tturtle1_poseCallback: "+str(count))


    turtle1_pose.x = round(data.x, 4)
    turtle1_pose.y = round(data.y, 4)
    turtle1_pose.theta = round(data.theta, 4)
    for i in len(turtlelist):
        node.get_logger().info("i: "+str(i)+" len(turtlelist): "+str(len(turtlelist)))
        twist_data = Twist()
        diff = math.sqrt(pow((turtle1_pose.x - turtlelist[i].turtle_pose.x) , 2) + pow((turtle1_pose.y - turtlelist[i].turtle_pose.y), 2))
        ang = math.atan2(turtle1_pose.y - turtlelist[i].turtle_pose.y, turtle1_pose.x - turtlelist[i].turtle_pose.x) - turtlelist[i].turtle_pose.theta
        
        if(ang <= -3.14) or (ang > 3.14):
            ang = ang / math.pi

        if (turtlelist[i].state == 1):
            if (diff < 1.0) :
                if i<5:
                    turtlelist[i].state = 2
                    turtlelist[i].turtle_to_follow = lastTurtle
                    lastTurtle = i + 2
                    #rclpy.Node.get_logger()
                    #rospy.loginfo("Turtle Changed [%s] [%f] [%f]", turtlelist[i].turtle_name, diff, ang)
                    
                    nextturtleIndex += 1
                    turtlelist.append(mySpawner(node, "turtle" + str(nextturtleIndex)))
                # node.get_logger().info("Turtle list length(inside): "+str(len(turtlelist)))
                # else:
                #     del turtlelist[5]
                #     turtlelist[5].kill()
                #     nextturtleIndex = 5
                #     # lastTurtle -= 2
                #     turtlelist.append(mySpawner(node, "turtle" + str(nextturtleIndex)))


                # if len(turtlelist)>5:
                #     turtlelist[-2].
            # elif (diff<1.0) and (len(turtlelist)>4):
            #     # turtlelist[-1].kill()
            #     del turtlelist[-1]
            #     lastTurtle -= 2
            #     nextturtleIndex -= 1
            #     node.get_logger().info("Turtle diff: "+str(diff))


            else:
                dist_x = turtlelist[i].turtle_pose.x - turtle1_pose.x
                dist_y = turtlelist[i].turtle_pose.y - turtle1_pose.y
                distance = math.sqrt(dist_x*dist_x + dist_y*dist_y)
                msg = Twist()


                msg.linear.x = 2*distance
                # orientation
                goal_theta = math.atan2(dist_y, dist_x)
                diff2 = goal_theta - turtle1_pose.theta

                if diff2 > math.pi:
                    diff2 -= 2*math.pi
                elif diff2 < -math.pi:
                    diff2 += 2*math.pi

                msg.angular.z = 4*diff2

                    

                pub1.publish(msg)

        elif(turtlelist[i].state==2):
            try:
                parPose = turtle1_pose
                if(turtlelist[i].turtle_to_follow != 1):
                    parPose = turtlelist[turtlelist[i].turtle_to_follow - 2].turtle_pose
                
                diff = math.sqrt(pow((parPose.x - turtlelist[i].turtle_pose.x) , 2) + pow((parPose.y - turtlelist[i].turtle_pose.y), 2))
                goal = math.atan2(parPose.y - turtlelist[i].turtle_pose.y, parPose.x - turtlelist[i].turtle_pose.x)
                ang = math.atan2(math.sin(goal - turtlelist[i].turtle_pose.theta), math.cos(goal - turtlelist[i].turtle_pose.theta))

                if(ang <= -3.14) or (ang > 3.14):
                    ang = ang / (2*math.pi)
                
                if(diff < 0.5):
                    twist_data.linear.x = 0.0 
                    twist_data.angular.z = 0.0
                else:
                    twist_data.linear.x = 2.8 * diff                
                    twist_data.angular.z = 20.0 * ang
                
                turtlelist[i].turtle_velocity(twist_data)
            except IndexError:
                pass
            # turtlelist[i].oldAngle = ang   
        
 

def main(args=None):
    global nextturtleIndex


    rclpy.init(args=args)
    global node 
    node = Node('snake_turtle')
    node.create_subscription(Pose,'/turtle1/pose',turtle1_poseCallback, 10)
    global pub1
    pub1 = node.create_publisher(Twist, "/turtle1/cmd_vel", 10)
    nextturtleIndex += 1
    client2 = node.create_client(SetPen, '/turtle1/set_pen')
    while not client2.wait_for_service(1):
        node.get_logger().warn("waiting for SetPen service...")
    
    request2 = SetPen.Request()
    request2.r = 0; request2.g = 0; request2.b = 0; request2.width = 0; request2.off = 1

    future2 = client2.call_async(request2)

    turtlelist.append(mySpawner(node,"turtle" + str(nextturtleIndex)))
    # for i in range(2,10):
    #     turtlelist.append(mySpawner(node, "turtle" + str(i)))

    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

