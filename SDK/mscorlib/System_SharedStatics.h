#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Util { struct Tokenizer_StringMaker; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct SharedStatics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Util::Tokenizer_StringMaker* _maker;
		struct StaticFields
		{
			mscorlib::System::SharedStatics* _sharedStatics;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static mscorlib::System::Security::Util::Tokenizer_StringMaker* GetSharedStringMaker();
		static void ReleaseSharedStringMaker(mscorlib::System::Security::Util::Tokenizer_StringMaker& maker);
		static void _cctor();
	};
}

