#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Configuration_ConfigurationElementCollectionType.h"

namespace System_Configuration::System::Configuration
{
	struct ConfigurationCollectionAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Type* itemType);
		void set_AddItemName(mscorlib::System::String* value);
		void set_ClearItemsName(mscorlib::System::String* value);
		void set_CollectionType(System_Configuration::System::Configuration::ConfigurationElementCollectionType value);
		void set_RemoveItemName(mscorlib::System::String* value);
	};
}

