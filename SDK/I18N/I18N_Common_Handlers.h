#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace I18N::I18N::Common
{
	struct Handlers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* List;
			mscorlib::System::Collections::Hashtable* aliases;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
		static mscorlib::System::String* GetAlias(mscorlib::System::String* name);
		static void BuildHash();
	};
}

