#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct AttributeProviderAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _typeName;
		mscorlib::System::String* _propertyName;
		void _ctor(mscorlib::System::String* typeName);
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::String* propertyName);
		void _ctor(mscorlib::System::Type* type);
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_PropertyName();
	};
}

