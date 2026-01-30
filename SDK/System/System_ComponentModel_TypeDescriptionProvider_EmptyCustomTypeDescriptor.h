#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_CustomTypeDescriptor.h"
#include "System_ComponentModel_TypeDescriptionProvider.h"
namespace System::System::ComponentModel { struct TypeDescriptionProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct TypeDescriptionProvider_EmptyCustomTypeDescriptor : System::ComponentModel::CustomTypeDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

