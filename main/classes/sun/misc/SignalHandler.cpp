#include <sun/misc/SignalHandler.h>

#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <sun/misc/Signal$SunMiscHandler.h>
#include <sun/misc/Signal.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;
using $1Signal = ::sun::misc::Signal;
using $Signal$SunMiscHandler = ::sun::misc::Signal$SunMiscHandler;

namespace sun {
	namespace misc {

$FieldInfo _SignalHandler_FieldInfo_[] = {
	{"SIG_DFL", "Lsun/misc/SignalHandler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignalHandler, SIG_DFL)},
	{"SIG_IGN", "Lsun/misc/SignalHandler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignalHandler, SIG_IGN)},
	{}
};

$MethodInfo _SignalHandler_MethodInfo_[] = {
	{"handle", "(Lsun/misc/Signal;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SignalHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.misc.SignalHandler",
	nullptr,
	nullptr,
	_SignalHandler_FieldInfo_,
	_SignalHandler_MethodInfo_
};

$Object* allocate$SignalHandler($Class* clazz) {
	return $of($alloc(SignalHandler));
}

SignalHandler* SignalHandler::SIG_DFL = nullptr;
SignalHandler* SignalHandler::SIG_IGN = nullptr;

void clinit$SignalHandler($Class* class$) {
	$init($Signal$Handler);
	$assignStatic(SignalHandler::SIG_DFL, $new($Signal$SunMiscHandler, nullptr, $Signal$Handler::SIG_DFL));
	$assignStatic(SignalHandler::SIG_IGN, $new($Signal$SunMiscHandler, nullptr, $Signal$Handler::SIG_IGN));
}

$Class* SignalHandler::load$($String* name, bool initialize) {
	$loadClass(SignalHandler, name, initialize, &_SignalHandler_ClassInfo_, clinit$SignalHandler, allocate$SignalHandler);
	return class$;
}

$Class* SignalHandler::class$ = nullptr;

	} // misc
} // sun