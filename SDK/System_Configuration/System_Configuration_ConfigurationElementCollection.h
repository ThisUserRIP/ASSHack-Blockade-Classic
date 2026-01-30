#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Configuration_ConfigurationElement.h"
#include "System_Configuration_ConfigurationElementCollectionType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };
namespace mscorlib::System { struct Object; };

namespace System_Configuration::System::Configuration
{
	struct ConfigurationElementCollection : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Configuration::System::Configuration::ConfigurationElementCollectionType get_CollectionType();
		mscorlib::System::String* get_ElementName();
		bool get_ThrowOnDuplicate();
		System_Configuration::System::Configuration::ConfigurationElement* CreateNewElement();
		mscorlib::System::Object* GetElementKey(System_Configuration::System::Configuration::ConfigurationElement* element);
	};
}

