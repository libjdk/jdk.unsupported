#include <sun/misc/Signal.h>

#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <sun/misc/Signal$InternalMiscHandler.h>
#include <sun/misc/Signal$SunMiscHandler.h>
#include <sun/misc/SignalHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;
using $Signal$InternalMiscHandler = ::sun::misc::Signal$InternalMiscHandler;
using $Signal$SunMiscHandler = ::sun::misc::Signal$SunMiscHandler;
using $SignalHandler = ::sun::misc::SignalHandler;

namespace sun {
	namespace misc {

$FieldInfo _Signal_FieldInfo_[] = {
	{"iSignal", "Ljdk/internal/misc/Signal;", nullptr, $PRIVATE | $FINAL, $field(Signal, iSignal)},
	{}
};

$MethodInfo _Signal_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Signal::*)($String*)>(&Signal::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Signal::*)()>(&Signal::getName))},
	{"getNumber", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Signal::*)()>(&Signal::getNumber))},
	{"handle", "(Lsun/misc/Signal;Lsun/misc/SignalHandler;)Lsun/misc/SignalHandler;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$SignalHandler*(*)(Signal*,$SignalHandler*)>(&Signal::handle)), "java.lang.IllegalArgumentException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"raise", "(Lsun/misc/Signal;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Signal*)>(&Signal::raise)), "java.lang.IllegalArgumentException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Signal_InnerClassesInfo_[] = {
	{"sun.misc.Signal$SunMiscHandler", "sun.misc.Signal", "SunMiscHandler", $STATIC | $FINAL},
	{"sun.misc.Signal$InternalMiscHandler", "sun.misc.Signal", "InternalMiscHandler", $STATIC | $FINAL},
	{}
};

$ClassInfo _Signal_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.misc.Signal",
	"java.lang.Object",
	nullptr,
	_Signal_FieldInfo_,
	_Signal_MethodInfo_,
	nullptr,
	nullptr,
	_Signal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.misc.Signal$SunMiscHandler,sun.misc.Signal$InternalMiscHandler"
};

$Object* allocate$Signal($Class* clazz) {
	return $of($alloc(Signal));
}

int32_t Signal::getNumber() {
	return $nc(this->iSignal)->getNumber();
}

$String* Signal::getName() {
	return $nc(this->iSignal)->getName();
}

bool Signal::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (other == nullptr || !($instanceOf(Signal, other))) {
		return false;
	}
	$var(Signal, other1, $cast(Signal, other));
	return $nc(this->iSignal)->equals($nc(other1)->iSignal);
}

int32_t Signal::hashCode() {
	return getNumber();
}

$String* Signal::toString() {
	return $nc(this->iSignal)->toString();
}

void Signal::init$($String* name) {
	$set(this, iSignal, $new($Signal, name));
}

$SignalHandler* Signal::handle(Signal* sig, $SignalHandler* handler) {
	$load(Signal);
	$synchronized(class$) {
		$useLocalCurrentObjectStackCache();
		$var($Signal$Handler, oldHandler, $Signal::handle($nc(sig)->iSignal, $($Signal$InternalMiscHandler::of(sig, handler))));
		return $Signal$SunMiscHandler::of($nc(sig)->iSignal, oldHandler);
	}
}

void Signal::raise(Signal* sig) {
	$Signal::raise($nc(sig)->iSignal);
}

Signal::Signal() {
}

$Class* Signal::load$($String* name, bool initialize) {
	$loadClass(Signal, name, initialize, &_Signal_ClassInfo_, allocate$Signal);
	return class$;
}

$Class* Signal::class$ = nullptr;

	} // misc
} // sun