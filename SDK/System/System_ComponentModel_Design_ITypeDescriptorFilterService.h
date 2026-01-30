#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct IComponent; };
namespace mscorlib::System::Collections { struct IDictionary; };

namespace System::System::ComponentModel::Design
{
	struct ITypeDescriptorFilterService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool FilterAttributes(System::ComponentModel::IComponent* component, mscorlib::System::Collections::IDictionary* attributes);
		bool FilterEvents(System::ComponentModel::IComponent* component, mscorlib::System::Collections::IDictionary* events);
		bool FilterProperties(System::ComponentModel::IComponent* component, mscorlib::System::Collections::IDictionary* properties);
	};
}

