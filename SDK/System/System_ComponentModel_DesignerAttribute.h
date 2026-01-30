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
	struct DesignerAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* designerTypeName;
		mscorlib::System::String* designerBaseTypeName;
		mscorlib::System::String* typeId;
		void _ctor(mscorlib::System::String* designerTypeName);
		void _ctor(mscorlib::System::Type* designerType);
		void _ctor(mscorlib::System::String* designerTypeName, mscorlib::System::String* designerBaseTypeName);
		void _ctor(mscorlib::System::String* designerTypeName, mscorlib::System::Type* designerBaseType);
		void _ctor(mscorlib::System::Type* designerType, mscorlib::System::Type* designerBaseType);
		mscorlib::System::String* get_DesignerBaseTypeName();
		mscorlib::System::String* get_DesignerTypeName();
		mscorlib::System::Object* get_TypeId();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

