#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct MemberDescriptor; };

namespace System::System::ComponentModel::Design
{
	struct IComponentChangeService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnComponentChanged(mscorlib::System::Object* component, System::ComponentModel::MemberDescriptor* member, mscorlib::System::Object* oldValue, mscorlib::System::Object* newValue);
		void OnComponentChanging(mscorlib::System::Object* component, System::ComponentModel::MemberDescriptor* member);
	};
}

