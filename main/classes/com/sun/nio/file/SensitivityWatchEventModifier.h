#ifndef _com_sun_nio_file_SensitivityWatchEventModifier_h_
#define _com_sun_nio_file_SensitivityWatchEventModifier_h_
//$ class com.sun.nio.file.SensitivityWatchEventModifier
//$ extends java.lang.Enum
//$ implements java.nio.file.WatchEvent$Modifier

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/WatchEvent$Modifier.h>

#pragma push_macro("HIGH")
#undef HIGH
#pragma push_macro("LOW")
#undef LOW
#pragma push_macro("MEDIUM")
#undef MEDIUM

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

class $export SensitivityWatchEventModifier : public ::java::lang::Enum, public ::java::nio::file::WatchEvent$Modifier {
	$class(SensitivityWatchEventModifier, 0, ::java::lang::Enum, ::java::nio::file::WatchEvent$Modifier)
public:
	SensitivityWatchEventModifier();
	static $Array<::com::sun::nio::file::SensitivityWatchEventModifier>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, ::jdk::internal::misc::FileSystemOption* option, int32_t sensitivity);
	virtual $String* name() override;
	virtual int32_t sensitivityValueInSeconds();
	virtual $String* toString() override;
	static ::com::sun::nio::file::SensitivityWatchEventModifier* valueOf($String* name);
	static $Array<::com::sun::nio::file::SensitivityWatchEventModifier>* values();
	static ::com::sun::nio::file::SensitivityWatchEventModifier* HIGH;
	static ::com::sun::nio::file::SensitivityWatchEventModifier* MEDIUM;
	static ::com::sun::nio::file::SensitivityWatchEventModifier* LOW;
	static $Array<::com::sun::nio::file::SensitivityWatchEventModifier>* $VALUES;
	int32_t sensitivity = 0;
};

			} // file
		} // nio
	} // sun
} // com

#pragma pop_macro("HIGH")
#pragma pop_macro("LOW")
#pragma pop_macro("MEDIUM")

#endif // _com_sun_nio_file_SensitivityWatchEventModifier_h_