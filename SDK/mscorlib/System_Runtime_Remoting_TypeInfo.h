#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting
{
	struct TypeInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* serverType;
		IL2CPP::Array<mscorlib::System::String*>* serverHierarchy;
		IL2CPP::Array<mscorlib::System::String*>* interfacesImplemented;
		void _ctor(mscorlib::System::Type* type);
		mscorlib::System::String* get_TypeName();
		bool CanCastTo(mscorlib::System::Type* fromType, mscorlib::System::Object* o);
	};
}

