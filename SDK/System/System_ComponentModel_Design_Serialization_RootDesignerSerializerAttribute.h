#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel::Design::Serialization
{
	struct RootDesignerSerializerAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool reloadable;
		mscorlib::System::String* serializerTypeName;
		mscorlib::System::String* serializerBaseTypeName;
		mscorlib::System::String* typeId;
		void _ctor(mscorlib::System::String* serializerTypeName, mscorlib::System::String* baseSerializerTypeName, bool reloadable);
		mscorlib::System::Object* get_TypeId();
	};
}

