#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Specialized_NameObjectCollectionBase.h"
namespace System::System::Collections::Specialized { struct NameObjectCollectionBase; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Collections::Specialized
{
	struct NameObjectCollectionBase_NameObjectEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Key;
		mscorlib::System::Object* Value;
		void _ctor(mscorlib::System::String* name, mscorlib::System::Object* value);
	};
}

