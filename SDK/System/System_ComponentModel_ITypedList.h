#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };

namespace System::System::ComponentModel
{
	struct ITypedList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* GetListName(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* listAccessors);
		System::ComponentModel::PropertyDescriptorCollection* GetItemProperties(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* listAccessors);
	};
}

