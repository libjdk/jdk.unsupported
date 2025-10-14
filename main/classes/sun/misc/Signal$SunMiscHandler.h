#ifndef _sun_misc_Signal$SunMiscHandler_h_
#define _sun_misc_Signal$SunMiscHandler_h_
//$ class sun.misc.Signal$SunMiscHandler
//$ extends sun.misc.SignalHandler

#include <sun/misc/SignalHandler.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal;
			class Signal$Handler;
		}
	}
}
namespace sun {
	namespace misc {
		class Signal;
	}
}

namespace sun {
	namespace misc {

class $export Signal$SunMiscHandler : public ::sun::misc::SignalHandler {
	$class(Signal$SunMiscHandler, $NO_CLASS_INIT, ::sun::misc::SignalHandler)
public:
	Signal$SunMiscHandler();
	void init$(::jdk::internal::misc::Signal* iSignal, ::jdk::internal::misc::Signal$Handler* iHandler);
	virtual void handle(::sun::misc::Signal* sig) override;
	static ::sun::misc::SignalHandler* of(::jdk::internal::misc::Signal* signal, ::jdk::internal::misc::Signal$Handler* handler);
	virtual $String* toString() override;
	::jdk::internal::misc::Signal* iSignal = nullptr;
	::jdk::internal::misc::Signal$Handler* iHandler = nullptr;
};

	} // misc
} // sun

#endif // _sun_misc_Signal$SunMiscHandler_h_