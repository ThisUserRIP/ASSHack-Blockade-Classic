#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct ProvidePropertyAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* propertyName;
		mscorlib::System::String* receiverTypeName;
		void _ctor(mscorlib::System::String* propertyName, mscorlib::System::Type* receiverType);
		void _ctor(mscorlib::System::String* propertyName, mscorlib::System::String* receiverTypeName);
		mscorlib::System::String* get_PropertyName();
		mscorlib::System::String* get_ReceiverTypeName();
		mscorlib::System::Object* get_TypeId();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

