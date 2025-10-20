#include <jdk.unsupported.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/nio/file/ExtendedCopyOption.h>
#include <com/sun/nio/file/ExtendedOpenOption.h>
#include <com/sun/nio/file/ExtendedWatchEventModifier.h>
#include <com/sun/nio/file/SensitivityWatchEventModifier.h>
#include <sun/misc/Signal.h>
#include <sun/misc/Signal$InternalMiscHandler.h>
#include <sun/misc/Signal$SunMiscHandler.h>
#include <sun/misc/SignalHandler.h>
#include <sun/misc/Unsafe.h>
#include <sun/reflect/ReflectionFactory.h>
#include <sun/reflect/ReflectionFactory$1.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$unsupported_classes_[] = {
	$classEntry("com.sun.nio.file.ExtendedCopyOption", ::com::sun::nio::file::ExtendedCopyOption),
	$classEntry("com.sun.nio.file.ExtendedOpenOption", ::com::sun::nio::file::ExtendedOpenOption),
	$classEntry("com.sun.nio.file.ExtendedWatchEventModifier", ::com::sun::nio::file::ExtendedWatchEventModifier),
	$classEntry("com.sun.nio.file.SensitivityWatchEventModifier", ::com::sun::nio::file::SensitivityWatchEventModifier),
	$classEntry("sun.misc.Signal", ::sun::misc::Signal),
	$classEntry("sun.misc.Signal$InternalMiscHandler", ::sun::misc::Signal$InternalMiscHandler),
	$classEntry("sun.misc.Signal$SunMiscHandler", ::sun::misc::Signal$SunMiscHandler),
	$classEntry("sun.misc.SignalHandler", ::sun::misc::SignalHandler),
	$classEntry("sun.misc.Unsafe", ::sun::misc::Unsafe),
	$classEntry("sun.reflect.ReflectionFactory", ::sun::reflect::ReflectionFactory),
	$classEntry("sun.reflect.ReflectionFactory$1", ::sun::reflect::ReflectionFactory$1)
};

const char* _jdk$unsupported_packages_[] = {
	"com.sun.nio.file",
	"sun.misc",
	"sun.reflect"
};

void jdk$unsupported$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_jdk$unsupported_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$unsupported_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void jdk$unsupported$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$unsupported$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$unsupported$GetPackages() {
	int32_t length = $lengthOf(_jdk$unsupported_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$unsupported_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$unsupported$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$unsupported_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$unsupported_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$unsupported$GetResource($String* name) {
	return nullptr;
}

void jdk$unsupported::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.unsupported", "17.35", "",
		&_jdk$unsupported_ModuleInfo_,
		jdk$unsupported$LibEventAction,
		jdk$unsupported$GetPackages,
		jdk$unsupported$GetClassEntry,
		jdk$unsupported$GetResource
	};
	$System::addLibrary(&lib);
}