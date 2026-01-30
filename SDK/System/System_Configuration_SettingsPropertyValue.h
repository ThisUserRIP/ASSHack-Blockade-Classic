#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Configuration { struct SettingsProperty; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace System::System::Configuration
{
	struct SettingsPropertyValue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System::Configuration::SettingsProperty* property);
		bool get_Deserialized();
		void set_Deserialized(bool value);
		bool get_IsDirty();
		void set_IsDirty(bool value);
		mscorlib::System::String* get_Name();
		System::Configuration::SettingsProperty* get_Property();
		mscorlib::System::Object* get_PropertyValue();
		void set_PropertyValue(mscorlib::System::Object* value);
		mscorlib::System::Object* get_SerializedValue();
		void set_SerializedValue(mscorlib::System::Object* value);
		bool get_UsingDefaultValue();
	};
}

