#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeDescriptionProvider.h"
#include "System_ComponentModel_TypeDescriptor.h"
namespace System::System::ComponentModel { struct TypeDescriptor; };
namespace System::System::ComponentModel { struct IComNativeDescriptorHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct ICustomTypeDescriptor; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor_ComNativeDescriptionProvider : System::ComponentModel::TypeDescriptionProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::IComNativeDescriptorHandler* _handler;
		void _ctor(System::ComponentModel::IComNativeDescriptorHandler* handler);
		System::ComponentModel::IComNativeDescriptorHandler* get_Handler();
		void set_Handler(System::ComponentModel::IComNativeDescriptorHandler* value);
		System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(mscorlib::System::Type* objectType, mscorlib::System::Object* instance);
	};
}

