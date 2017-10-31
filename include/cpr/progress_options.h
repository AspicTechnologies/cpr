#ifndef CPR_PROGRESSOPTIONS_H
#define CPR_PROGRESSOPTIONS_H

#include <functional>

namespace cpr {

class ProgressCallback {
  public:
	ProgressCallback() {}
	ProgressCallback(std::function<void (double,   double,   double,   double)> progressCallback);

	static int curlCallback(void *userData,   double dltotal,   double dlnow,   double ultotal,   double ulnow);

  private:
	std::function<void (double,   double,   double,   double)> _progressCallback;
};

} // namespace cpr

#endif
