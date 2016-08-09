#include <string>
#include <sstream>
#include "../../analytic/AnalyticResult.hpp"

class NotificationMqUtil {

public:
	static std::string NOTIFICATION_MQ_ADDRESS;
	static std::string MOBILE_NOTIFICATION_MQ_PORT;
	static std::string GFIN_NOTIFICATION_MQ_PORT;

	NotificationMqUtil(void);

	std::string generateMessage(unsigned int analyticIId,
			analytic::AnalyticResult result);
};
