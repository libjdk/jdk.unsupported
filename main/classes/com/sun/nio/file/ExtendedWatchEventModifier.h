#ifndef _com_sun_nio_file_ExtendedWatchEventModifier_h_
#define _com_sun_nio_file_ExtendedWatchEventModifier_h_
//$ class com.sun.nio.file.ExtendedWatchEventModifier
//$ extends java.lang.Enum
//$ implements java.nio.file.WatchEvent$Modifier

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/WatchEvent$Modifier.h>

#pragma push_macro("FILE_TREE")
#undef FILE_TREE

namespace jdk {
	namespace internal {
		namespace misc {
			class FileSystemOption;
		}
	}
}

namespace com {
	namespace sun {
		namespace nio {
			namespace file {

class $export ExtendedWatchEventModifier : public ::java::lang::Enum, public ::java::nio::file::WatchEvent$Modifier {
	$class(ExtendedWatchEventModifier, 0, ::java::lang::Enum, ::java::nio::file::WatchEvent$Modifier)
public:
	ExtendedWatchEventModifier();
	static $Array<::com::sun::nio::file::ExtendedWatchEventModifier>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, ::jdk::internal::misc::FileSystemOption* option);
	virtual $String* name() override;
	virtual $String* toString() override;
	static ::com::sun::nio::file::ExtendedWatchEventModifier* valueOf($String* name);
	static $Array<::com::sun::nio::file::ExtendedWatchEventModifier>* values();
	static ::com::sun::nio::file::ExtendedWatchEventModifier* FILE_TREE;
	static $Array<::com::sun::nio::file::ExtendedWatchEventModifier>* $VALUES;
};

			} // file
		} // nio
	} // sun
} // com

#pragma pop_macro("FILE_TREE")

#endif // _com_sun_nio_file_ExtendedWatchEventModifier_h_