#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_CustomTypeDescriptor.h"
#include "System_ComponentModel_TypeDescriptor_AttributeProvider.h"
namespace System::System::ComponentModel { struct TypeDescriptor_AttributeProvider; };
namespace mscorlib::System { struct Attribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct ICustomTypeDescriptor; };
namespace System::System::ComponentModel { struct AttributeCollection; };

namespace System::System::ComponentModel
{
	struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor : System::ComponentModel::CustomTypeDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Attribute*>* _attributeArray;
		void _ctor(IL2CPP::Array<mscorlib::System::Attribute*>* attrs, System::ComponentModel::ICustomTypeDescriptor* parent);
		System::ComponentModel::AttributeCollection* GetAttributes();
	};
}

