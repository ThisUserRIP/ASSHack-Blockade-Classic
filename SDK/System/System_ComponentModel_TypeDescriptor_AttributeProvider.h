#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeDescriptionProvider.h"
#include "System_ComponentModel_TypeDescriptor.h"
namespace System::System::ComponentModel { struct TypeDescriptor; };
namespace mscorlib::System { struct Attribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct TypeDescriptionProvider; };
namespace System::System::ComponentModel { struct ICustomTypeDescriptor; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor_AttributeProvider : System::ComponentModel::TypeDescriptionProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Attribute*>* _attrs;
		void _ctor(System::ComponentModel::TypeDescriptionProvider* existingProvider, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(mscorlib::System::Type* objectType, mscorlib::System::Object* instance);
	};
}

