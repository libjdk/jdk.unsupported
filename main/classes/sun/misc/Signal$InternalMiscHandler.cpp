#include <sun/misc/Signal$InternalMiscHandler.h>

#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <sun/misc/Signal$SunMiscHandler.h>
#include <sun/misc/Signal.h>
#include <sun/misc/SignalHandler.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;
using $Signal = ::sun::misc::Signal;
using $Signal$SunMiscHandler = ::sun::misc::Signal$SunMiscHandler;
using $SignalHandler = ::sun::misc::SignalHandler;

namespace sun {
	namespace misc {

$FieldInfo _Signal$InternalMiscHandler_FieldInfo_[] = {
	{"handler", "Lsun/misc/SignalHandler;", nullptr, $PRIVATE | $FINAL, $field(Signal$InternalMiscHandler, handler)},
	{"signal", "Lsun/misc/Signal;", nullptr, $PRIVATE | $FINAL, $field(Signal$InternalMiscHandler, signal)},
	{}
};

$MethodInfo _Signal$InternalMiscHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/misc/Signal;Lsun/misc/SignalHandler;)V", nullptr, $PRIVATE, $method(static_cast<void(Signal$InternalMiscHandler::*)($Signal*,$SignalHandler*)>(&Signal$InternalMiscHandler::init$))},
	{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC},
	{"of", "(Lsun/misc/Signal;Lsun/misc/SignalHandler;)Ljdk/internal/misc/Signal$Handler;", nullptr, $STATIC, $method(static_cast<$Signal$Handler*(*)($Signal*,$SignalHandler*)>(&Signal$InternalMiscHandler::of))},
	{}
};

$InnerClassInfo _Signal$InternalMiscHandler_InnerClassesInfo_[] = {
	{"sun.misc.Signal$InternalMiscHandler", "sun.misc.Signal", "InternalMiscHandler", $STATIC | $FINAL},
	{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Signal$InternalMiscHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.misc.Signal$InternalMiscHandler",
	"java.lang.Object",
	"jdk.internal.misc.Signal$Handler",
	_Signal$InternalMiscHandler_FieldInfo_,
	_Signal$InternalMiscHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Signal$InternalMiscHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.misc.Signal"
};

$Object* allocate$Signal$InternalMiscHandler($Class* clazz) {
	return $of($alloc(Signal$InternalMiscHandler));
}

$Signal$Handler* Signal$InternalMiscHandler::of($Signal* signal, $SignalHandler* handler) {
	$init(Signal$InternalMiscHandler);
	$init($SignalHandler);
	if (handler == $SignalHandler::SIG_DFL) {
		$init($Signal$Handler);
		return $Signal$Handler::SIG_DFL;
	} else {
		if (handler == $SignalHandler::SIG_IGN) {
			$init($Signal$Handler);
			return $Signal$Handler::SIG_IGN;
		} else if ($instanceOf($Signal$SunMiscHandler, handler)) {
			return $nc(($cast($Signal$SunMiscHandler, handler)))->iHandler;
		} else {
			return $new(Signal$InternalMiscHandler, signal, handler);
		}
	}
}

void Signal$InternalMiscHandler::init$($Signal* signal, $SignalHandler* handler) {
	$set(this, handler, handler);
	$set(this, signal, signal);
}

void Signal$InternalMiscHandler::handle($1Signal* ignore) {
	$nc(this->handler)->handle(this->signal);
}

Signal$InternalMiscHandler::Signal$InternalMiscHandler() {
}

$Class* Signal$InternalMiscHandler::load$($String* name, bool initialize) {
	$loadClass(Signal$InternalMiscHandler, name, initialize, &_Signal$InternalMiscHandler_ClassInfo_, allocate$Signal$InternalMiscHandler);
	return class$;
}

$Class* Signal$InternalMiscHandler::class$ = nullptr;

	} // misc
} // sun