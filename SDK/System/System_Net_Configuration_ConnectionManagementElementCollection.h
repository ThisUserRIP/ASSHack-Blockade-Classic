#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElementCollection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Configuration { struct ConnectionManagementElement; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net::Configuration
{
	struct ConnectionManagementElementCollection : System_Configuration::System::Configuration::ConfigurationElementCollection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::ConnectionManagementElement* get_Item(int32_t index);
		void set_Item(int32_t index, System::Net::Configuration::ConnectionManagementElement* value);
		System::Net::Configuration::ConnectionManagementElement* get_Item(mscorlib::System::String* name);
		void set_Item(mscorlib::System::String* name, System::Net::Configuration::ConnectionManagementElement* value);
		void Add(System::Net::Configuration::ConnectionManagementElement* element);
		void Clear();
		System_Configuration::System::Configuration::ConfigurationElement* CreateNewElement();
		mscorlib::System::Object* GetElementKey(System_Configuration::System::Configuration::ConfigurationElement* element);
		int32_t IndexOf(System::Net::Configuration::ConnectionManagementElement* element);
		void Remove(System::Net::Configuration::ConnectionManagementElement* element);
		void Remove(mscorlib::System::String* name);
		void RemoveAt(int32_t index);
	};
}

