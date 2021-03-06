#ifndef _ROS_SERVICE_mhmlt_joystick_data_h
#define _ROS_SERVICE_mhmlt_joystick_data_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "sensor_msgs/Joy.h"

namespace ros_mhmlt_msgs
{

static const char MHMLT_JOYSTICK_DATA[] = "ros_mhmlt_msgs/mhmlt_joystick_data";

  class mhmlt_joystick_dataRequest : public ros::Msg
  {
    public:
      typedef bool _command_type;
      _command_type command;

    mhmlt_joystick_dataRequest():
      command(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_command;
      u_command.real = this->command;
      *(outbuffer + offset + 0) = (u_command.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->command);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_command;
      u_command.base = 0;
      u_command.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->command = u_command.real;
      offset += sizeof(this->command);
     return offset;
    }

    const char * getType(){ return MHMLT_JOYSTICK_DATA; };
    const char * getMD5(){ return "01134d7a2df15c0112a6a1d7df9d666d"; };

  };

  class mhmlt_joystick_dataResponse : public ros::Msg
  {
    public:
      typedef bool _state_type;
      _state_type state;
      typedef sensor_msgs::Joy _joystick_data_type;
      _joystick_data_type joystick_data;

    mhmlt_joystick_dataResponse():
      state(0),
      joystick_data()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_state;
      u_state.real = this->state;
      *(outbuffer + offset + 0) = (u_state.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->state);
      offset += this->joystick_data.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_state;
      u_state.base = 0;
      u_state.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->state = u_state.real;
      offset += sizeof(this->state);
      offset += this->joystick_data.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return MHMLT_JOYSTICK_DATA; };
    const char * getMD5(){ return "652ab8bbc8565d5fc36d35c89a957203"; };

  };

  class mhmlt_joystick_data {
    public:
    typedef mhmlt_joystick_dataRequest Request;
    typedef mhmlt_joystick_dataResponse Response;
  };

}
#endif
