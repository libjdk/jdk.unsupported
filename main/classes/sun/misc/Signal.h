#ifndef _sun_misc_Signal_h_
#define _sun_misc_Signal_h_
//$ class sun.misc.Signal
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal;
		}
	}
}
namespace sun {
	namespace misc {
		class SignalHandler;
	}
}

namespace sun {
	namespace misc {

class $export Signal : public ::java::lang::Object {
	$class(Signal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Signal();
	void init$($String* name);
	virtual bool equals(Object$* other) override;
	$String* getName();
	int32_t getNumber();
	static ::sun::misc::SignalHandler* handle(::sun::misc::Signal* sig, ::sun::misc::SignalHandler* handler);
	virtual int32_t hashCode() override;
	static void raise(::sun::misc::Signal* sig);
	virtual $String* toString() override;
	::jdk::internal::misc::Signal* iSignal = nullptr;
};

	} // misc
} // sun

#endif // _sun_misc_Signal_h_