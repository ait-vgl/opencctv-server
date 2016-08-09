#include "NotificationMqUtil.hpp"

std::string NotificationMqUtil::NOTIFICATION_MQ_ADDRESS = "localhost";
std::string NotificationMqUtil::MOBILE_NOTIFICATION_MQ_PORT = "1234";
std::string NotificationMqUtil::GFIN_NOTIFICATION_MQ_PORT = "1235";

NotificationMqUtil::NotificationMqUtil(void) {
}

std::string NotificationMqUtil::generateMessage(unsigned int analyticIId,
		analytic::AnalyticResult result) {
	std::string message;

	std::stringstream ss;
	std::string tmp;
	ss << analyticIId;
	ss >> tmp;

	std::string sAnalyticIId = "analyticiid: " + tmp;
	ss.clear();
	tmp.clear();

	ss << result.getStreamId();
	ss >> tmp;

	std::string sStreamId = "streamid: " + tmp;
	ss.clear();
	tmp.clear();

	std::string sInputName = "inputname: " + result.getInputName();

	std::string sTimestamp = "timestamp: " + result.getTimestamp();

	std::string sCustomText = "customtext: " + result.getCustomText();

	message = sAnalyticIId + "|" + sStreamId + "|" + sInputName + "|"
			+ sTimestamp + "|" + sCustomText;
	return message;
}

