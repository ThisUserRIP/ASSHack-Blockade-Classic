#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_ReferenceConverter.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Attribute; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct ComponentConverter : System::ComponentModel::ReferenceConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Type* type);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext* context);
	};
}

