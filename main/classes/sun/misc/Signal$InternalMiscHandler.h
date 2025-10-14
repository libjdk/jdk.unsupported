#ifndef _sun_misc_Signal$InternalMiscHandler_h_
#define _sun_misc_Signal$InternalMiscHandler_h_
//$ class sun.misc.Signal$InternalMiscHandler
//$ extends jdk.internal.misc.Signal$Handler

#include <jdk/internal/misc/Signal$Handler.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal;
		}
	}
}
namespace sun {
	namespace misc {
		class Signal;
		class SignalHandler;
	}
}

namespace sun {
	namespace misc {

class $export Signal$InternalMiscHandler : public ::jdk::internal::misc::Signal$Handler {
	$class(Signal$InternalMiscHandler, $NO_CLASS_INIT, ::jdk::internal::misc::Signal$Handler)
public:
	Signal$InternalMiscHandler();
	void init$(::sun::misc::Signal* signal, ::sun::misc::SignalHandler* handler);
	virtual void handle(::jdk::internal::misc::Signal* ignore) override;
	static ::jdk::internal::misc::Signal$Handler* of(::sun::misc::Signal* signal, ::sun::misc::SignalHandler* handler);
	::sun::misc::SignalHandler* handler = nullptr;
	::sun::misc::Signal* signal = nullptr;
};

	} // misc
} // sun

#endif // _sun_misc_Signal$InternalMiscHandler_h_