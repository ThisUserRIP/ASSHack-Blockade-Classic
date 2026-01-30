#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_ReadOnlyCollectionBase.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct IComponent; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct ComponentCollection : mscorlib::System::Collections::ReadOnlyCollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(IL2CPP::Array<System::ComponentModel::IComponent*>* components);
		System::ComponentModel::IComponent* get_Item(mscorlib::System::String* name);
		System::ComponentModel::IComponent* get_Item(int32_t index);
		void CopyTo(IL2CPP::Array<System::ComponentModel::IComponent*>* array, int32_t index);
	};
}

