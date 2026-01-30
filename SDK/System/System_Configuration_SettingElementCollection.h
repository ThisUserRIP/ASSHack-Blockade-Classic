#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElementCollection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\System_Configuration\System_Configuration_ConfigurationElementCollectionType.h"
namespace mscorlib::System { struct String; };
namespace System::System::Configuration { struct SettingElement; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };
namespace mscorlib::System { struct Object; };

namespace System::System::Configuration
{
	struct SettingElementCollection : System_Configuration::System::Configuration::ConfigurationElementCollection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System_Configuration::System::Configuration::ConfigurationElementCollectionType get_CollectionType();
		mscorlib::System::String* get_ElementName();
		void Add(System::Configuration::SettingElement* element);
		void Clear();
		System_Configuration::System::Configuration::ConfigurationElement* CreateNewElement();
		System::Configuration::SettingElement* Get(mscorlib::System::String* elementKey);
		mscorlib::System::Object* GetElementKey(System_Configuration::System::Configuration::ConfigurationElement* element);
		void Remove(System::Configuration::SettingElement* element);
	};
}

