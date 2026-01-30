#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct ComponentEditor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool EditComponent(mscorlib::System::Object* component);
		bool EditComponent(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* component);
		void _ctor();
	};
}

