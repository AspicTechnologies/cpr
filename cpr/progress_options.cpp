#include "cpr/progress_options.h"

namespace cpr{

ProgressCallback::ProgressCallback(std::function<void (double, double, double, double)> progressCallback):
_progressCallback(progressCallback)
{

}

int ProgressCallback::curlCallback(void *userData,   double dltotal,   double dlnow,   double ultotal,   double ulnow){
	static_cast<ProgressCallback*>(userData)->_progressCallback(dltotal,dlnow,ultotal,ulnow);
	return 0;
}
}
