#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct IComponent; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct ComponentCollection; };

namespace System::System::ComponentModel
{
	struct IContainer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Add(System::ComponentModel::IComponent* component);
		void Add(System::ComponentModel::IComponent* component, mscorlib::System::String* name);
		System::ComponentModel::ComponentCollection* get_Components();
		void Remove(System::ComponentModel::IComponent* component);
	};
}

