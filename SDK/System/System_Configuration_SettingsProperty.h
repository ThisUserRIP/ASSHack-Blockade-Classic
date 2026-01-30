#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::Configuration { struct SettingsProvider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Configuration_SettingsSerializeAs.h"
namespace System::System::Configuration { struct SettingsAttributeDictionary; };

namespace System::System::Configuration
{
	struct SettingsProperty : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System::Configuration::SettingsProperty* propertyToCopy);
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, mscorlib::System::Type* propertyType, System::Configuration::SettingsProvider* provider, bool isReadOnly, mscorlib::System::Object* defaultValue, System::Configuration::SettingsSerializeAs serializeAs, System::Configuration::SettingsAttributeDictionary* attributes, bool throwOnErrorDeserializing, bool throwOnErrorSerializing);
		System::Configuration::SettingsAttributeDictionary* get_Attributes();
		mscorlib::System::Object* get_DefaultValue();
		void set_DefaultValue(mscorlib::System::Object* value);
		bool get_IsReadOnly();
		void set_IsReadOnly(bool value);
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::Type* get_PropertyType();
		void set_PropertyType(mscorlib::System::Type* value);
		System::Configuration::SettingsProvider* get_Provider();
		void set_Provider(System::Configuration::SettingsProvider* value);
		System::Configuration::SettingsSerializeAs get_SerializeAs();
		void set_SerializeAs(System::Configuration::SettingsSerializeAs value);
		bool get_ThrowOnErrorDeserializing();
		void set_ThrowOnErrorDeserializing(bool value);
		bool get_ThrowOnErrorSerializing();
		void set_ThrowOnErrorSerializing(bool value);
	};
}

