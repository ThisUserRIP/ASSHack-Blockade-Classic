#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElementCollection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\System_Configuration\System_Configuration_ConfigurationElementCollectionType.h"
namespace System::System::Configuration { struct SchemeSettingElement; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };
namespace mscorlib::System { struct Object; };

namespace System::System::Configuration
{
	struct SchemeSettingElementCollection : System_Configuration::System::Configuration::ConfigurationElementCollection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System_Configuration::System::Configuration::ConfigurationElementCollectionType get_CollectionType();
		System::Configuration::SchemeSettingElement* get_Item(int32_t index);
		System::Configuration::SchemeSettingElement* get_Item(mscorlib::System::String* name);
		System_Configuration::System::Configuration::ConfigurationElement* CreateNewElement();
		mscorlib::System::Object* GetElementKey(System_Configuration::System::Configuration::ConfigurationElement* element);
		int32_t IndexOf(System::Configuration::SchemeSettingElement* element);
	};
}

