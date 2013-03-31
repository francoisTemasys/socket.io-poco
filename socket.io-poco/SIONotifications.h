#pragma once
#include "Poco/Notification.h"

using Poco::Notification;

class SIOMessage: public Notification
{
public:
	SIOMessage(std::string msg) : _msg(msg) {}
	std::string getMsg() const {return _msg;}
private:
	std::string _msg;
};

class SIOJSONMessage: public Notification
{
	public:
	SIOJSONMessage(std::string msg) : _msg(msg) {}
	std::string getMsg() const {return _msg;}
private:
	std::string _msg;
};

class SIOEvent: public Notification
{

};