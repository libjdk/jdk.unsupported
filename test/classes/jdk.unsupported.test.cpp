#include <jdk.unsupported.test.h>

#include <jdk.unsupported.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void jdk$unsupported$test$PreloadClass(void* eventData) {
}

void jdk$unsupported$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$unsupported$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$unsupported$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$unsupported$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* jdk$unsupported$test$GetResource($String* name) {
	return nullptr;
}

void jdk$unsupported$test::init() {
	::jdk$unsupported::init();
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.unsupported.test", "17.35", "",
		nullptr,
		jdk$unsupported$test$LibEventAction,
		jdk$unsupported$test$GetPackages,
		jdk$unsupported$test$GetClassEntry,
		jdk$unsupported$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}