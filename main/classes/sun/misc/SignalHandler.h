#ifndef _sun_misc_SignalHandler_h_
#define _sun_misc_SignalHandler_h_
//$ interface sun.misc.SignalHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SIG_DFL")
#undef SIG_DFL
#pragma push_macro("SIG_IGN")
#undef SIG_IGN

namespace sun {
	namespace misc {
		class Signal;
	}
}

namespace sun {
	namespace misc {

class $export SignalHandler : public ::java::lang::Object {
	$interface(SignalHandler, 0, ::java::lang::Object)
public:
	virtual void handle(::sun::misc::Signal* sig) {}
	static ::sun::misc::SignalHandler* SIG_DFL;
	static ::sun::misc::SignalHandler* SIG_IGN;
};

	} // misc
} // sun

#pragma pop_macro("SIG_DFL")
#pragma pop_macro("SIG_IGN")

#endif // _sun_misc_SignalHandler_h_