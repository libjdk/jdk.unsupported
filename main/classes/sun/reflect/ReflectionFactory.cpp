#include <sun/reflect/ReflectionFactory.h>

#include <java/io/OptionalDataException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <sun/reflect/ReflectionFactory$1.h>
#include <jcpp.h>

#undef REFLECTION_FACTORY_ACCESS_PERM

using $OptionalDataException = ::java::io::OptionalDataException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;
using $ReflectionFactory$1 = ::sun::reflect::ReflectionFactory$1;

namespace sun {
	namespace reflect {

$FieldInfo _ReflectionFactory_FieldInfo_[] = {
	{"soleInstance", "Lsun/reflect/ReflectionFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReflectionFactory, soleInstance)},
	{"delegate", "Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReflectionFactory, delegate)},
	{"REFLECTION_FACTORY_ACCESS_PERM", "Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReflectionFactory, REFLECTION_FACTORY_ACCESS_PERM)},
	{}
};

$MethodInfo _ReflectionFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ReflectionFactory::*)()>(&ReflectionFactory::init$))},
	{"getReflectionFactory", "()Lsun/reflect/ReflectionFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ReflectionFactory*(*)()>(&ReflectionFactory::getReflectionFactory))},
	{"hasStaticInitializerForSerialization", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(ReflectionFactory::*)($Class*)>(&ReflectionFactory::hasStaticInitializerForSerialization))},
	{"newConstructorForExternalization", "(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC | $FINAL, $method(static_cast<$Constructor*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::newConstructorForExternalization))},
	{"newConstructorForSerialization", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Constructor<*>;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC},
	{"newConstructorForSerialization", "(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC | $FINAL, $method(static_cast<$Constructor*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::newConstructorForSerialization))},
	{"newOptionalDataExceptionForSerialization", "(Z)Ljava/io/OptionalDataException;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalDataException*(ReflectionFactory::*)(bool)>(&ReflectionFactory::newOptionalDataExceptionForSerialization))},
	{"readObjectForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $FINAL, $method(static_cast<$MethodHandle*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::readObjectForSerialization))},
	{"readObjectNoDataForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $FINAL, $method(static_cast<$MethodHandle*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::readObjectNoDataForSerialization))},
	{"readResolveForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $FINAL, $method(static_cast<$MethodHandle*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::readResolveForSerialization))},
	{"writeObjectForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $FINAL, $method(static_cast<$MethodHandle*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::writeObjectForSerialization))},
	{"writeReplaceForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $FINAL, $method(static_cast<$MethodHandle*(ReflectionFactory::*)($Class*)>(&ReflectionFactory::writeReplaceForSerialization))},
	{}
};

$InnerClassInfo _ReflectionFactory_InnerClassesInfo_[] = {
	{"sun.reflect.ReflectionFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReflectionFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.ReflectionFactory",
	"java.lang.Object",
	nullptr,
	_ReflectionFactory_FieldInfo_,
	_ReflectionFactory_MethodInfo_,
	nullptr,
	nullptr,
	_ReflectionFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.reflect.ReflectionFactory$1"
};

$Object* allocate$ReflectionFactory($Class* clazz) {
	return $of($alloc(ReflectionFactory));
}

ReflectionFactory* ReflectionFactory::soleInstance = nullptr;
$ReflectionFactory* ReflectionFactory::delegate = nullptr;
$Permission* ReflectionFactory::REFLECTION_FACTORY_ACCESS_PERM = nullptr;

void ReflectionFactory::init$() {
}

ReflectionFactory* ReflectionFactory::getReflectionFactory() {
	$init(ReflectionFactory);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission(ReflectionFactory::REFLECTION_FACTORY_ACCESS_PERM);
	}
	return ReflectionFactory::soleInstance;
}

$Constructor* ReflectionFactory::newConstructorForSerialization($Class* cl, $Constructor* constructorToCall) {
	return $nc(ReflectionFactory::delegate)->newConstructorForSerialization(cl, constructorToCall);
}

$Constructor* ReflectionFactory::newConstructorForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->newConstructorForSerialization(cl);
}

$Constructor* ReflectionFactory::newConstructorForExternalization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->newConstructorForExternalization(cl);
}

$MethodHandle* ReflectionFactory::readObjectForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->readObjectForSerialization(cl);
}

$MethodHandle* ReflectionFactory::readObjectNoDataForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->readObjectNoDataForSerialization(cl);
}

$MethodHandle* ReflectionFactory::writeObjectForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->writeObjectForSerialization(cl);
}

$MethodHandle* ReflectionFactory::readResolveForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->readResolveForSerialization(cl);
}

$MethodHandle* ReflectionFactory::writeReplaceForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->writeReplaceForSerialization(cl);
}

bool ReflectionFactory::hasStaticInitializerForSerialization($Class* cl) {
	return $nc(ReflectionFactory::delegate)->hasStaticInitializerForSerialization(cl);
}

$OptionalDataException* ReflectionFactory::newOptionalDataExceptionForSerialization(bool bool$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Constructor, cons, $nc(ReflectionFactory::delegate)->newOptionalDataExceptionForSerialization());
	try {
		return $cast($OptionalDataException, $nc(cons)->newInstance($$new($ObjectArray, {$($of($Boolean::valueOf(bool$)))})));
	} catch ($InstantiationException& ex) {
		$throwNew($InternalError, "unable to create OptionalDataException"_s, ex);
	} catch ($IllegalAccessException& ex) {
		$throwNew($InternalError, "unable to create OptionalDataException"_s, ex);
	} catch ($InvocationTargetException& ex) {
		$throwNew($InternalError, "unable to create OptionalDataException"_s, ex);
	}
	$shouldNotReachHere();
}

void clinit$ReflectionFactory($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(ReflectionFactory::soleInstance, $new(ReflectionFactory));
	$assignStatic(ReflectionFactory::delegate, $cast($ReflectionFactory, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ReflectionFactory$1)))));
	$assignStatic(ReflectionFactory::REFLECTION_FACTORY_ACCESS_PERM, $new($RuntimePermission, "reflectionFactoryAccess"_s));
}

ReflectionFactory::ReflectionFactory() {
}

$Class* ReflectionFactory::load$($String* name, bool initialize) {
	$loadClass(ReflectionFactory, name, initialize, &_ReflectionFactory_ClassInfo_, clinit$ReflectionFactory, allocate$ReflectionFactory);
	return class$;
}

$Class* ReflectionFactory::class$ = nullptr;

	} // reflect
} // sun