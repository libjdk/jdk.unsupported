#include <sun/misc/Signal$SunMiscHandler.h>

#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <sun/misc/Signal$InternalMiscHandler.h>
#include <sun/misc/Signal.h>
#include <sun/misc/SignalHandler.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;
using $1Signal = ::sun::misc::Signal;
using $Signal$InternalMiscHandler = ::sun::misc::Signal$InternalMiscHandler;
using $SignalHandler = ::sun::misc::SignalHandler;

namespace sun {
	namespace misc {

$FieldInfo _Signal$SunMiscHandler_FieldInfo_[] = {
	{"iSignal", "Ljdk/internal/misc/Signal;", nullptr, $PRIVATE | $FINAL, $field(Signal$SunMiscHandler, iSignal)},
	{"iHandler", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PRIVATE | $FINAL, $field(Signal$SunMiscHandler, iHandler)},
	{}
};

$MethodInfo _Signal$SunMiscHandler_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/misc/Signal;Ljdk/internal/misc/Signal$Handler;)V", nullptr, 0, $method(static_cast<void(Signal$SunMiscHandler::*)($Signal*,$Signal$Handler*)>(&Signal$SunMiscHandler::init$))},
	{"handle", "(Lsun/misc/Signal;)V", nullptr, $PUBLIC},
	{"of", "(Ljdk/internal/misc/Signal;Ljdk/internal/misc/Signal$Handler;)Lsun/misc/SignalHandler;", nullptr, $STATIC, $method(static_cast<$SignalHandler*(*)($Signal*,$Signal$Handler*)>(&Signal$SunMiscHandler::of))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Signal$SunMiscHandler_InnerClassesInfo_[] = {
	{"sun.misc.Signal$SunMiscHandler", "sun.misc.Signal", "SunMiscHandler", $STATIC | $FINAL},
	{}
};

$ClassInfo _Signal$SunMiscHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.misc.Signal$SunMiscHandler",
	"java.lang.Object",
	"sun.misc.SignalHandler",
	_Signal$SunMiscHandler_FieldInfo_,
	_Signal$SunMiscHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Signal$SunMiscHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.misc.Signal"
};

$Object* allocate$Signal$SunMiscHandler($Class* clazz) {
	return $of($alloc(Signal$SunMiscHandler));
}

$SignalHandler* Signal$SunMiscHandler::of($Signal* signal, $Signal$Handler* handler) {
	$init(Signal$SunMiscHandler);
	$init($Signal$Handler);
	if (handler == $Signal$Handler::SIG_DFL) {
		$init($SignalHandler);
		return $SignalHandler::SIG_DFL;
	} else {
		if (handler == $Signal$Handler::SIG_IGN) {
			$init($SignalHandler);
			return $SignalHandler::SIG_IGN;
		} else if ($instanceOf($Signal$InternalMiscHandler, handler)) {
			return $nc(($cast($Signal$InternalMiscHandler, handler)))->handler;
		} else {
			return $new(Signal$SunMiscHandler, signal, handler);
		}
	}
}

void Signal$SunMiscHandler::init$($Signal* iSignal, $Signal$Handler* iHandler) {
	$set(this, iSignal, iSignal);
	$set(this, iHandler, iHandler);
}

void Signal$SunMiscHandler::handle($1Signal* sig) {
	$nc(this->iHandler)->handle(this->iSignal);
}

$String* Signal$SunMiscHandler::toString() {
	return $nc($of(this->iHandler))->toString();
}

Signal$SunMiscHandler::Signal$SunMiscHandler() {
}

$Class* Signal$SunMiscHandler::load$($String* name, bool initialize) {
	$loadClass(Signal$SunMiscHandler, name, initialize, &_Signal$SunMiscHandler_ClassInfo_, allocate$Signal$SunMiscHandler);
	return class$;
}

$Class* Signal$SunMiscHandler::class$ = nullptr;

	} // misc
} // sun