#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::ComponentModel { struct IContainer; };
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct ITypeDescriptorContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::IContainer* get_Container();
		mscorlib::System::Object* get_Instance();
		System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor();
		bool OnComponentChanging();
		void OnComponentChanged();
	};
}

