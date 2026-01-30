#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct IExtenderProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct ExtenderProvidedPropertyAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::PropertyDescriptor* extenderProperty;
		System::ComponentModel::IExtenderProvider* provider;
		mscorlib::System::Type* receiverType;
		static System::ComponentModel::ExtenderProvidedPropertyAttribute* Create(System::ComponentModel::PropertyDescriptor* extenderProperty, mscorlib::System::Type* receiverType, System::ComponentModel::IExtenderProvider* provider);
		void _ctor();
		System::ComponentModel::PropertyDescriptor* get_ExtenderProperty();
		System::ComponentModel::IExtenderProvider* get_Provider();
		mscorlib::System::Type* get_ReceiverType();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool IsDefaultAttribute();
	};
}

