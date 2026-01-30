#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct StringObfucator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* StringObfuscatorPassword;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* Encode(mscorlib::System::String* NormalString);
		static mscorlib::System::String* Decode(mscorlib::System::String* ObfucatedString);
		static mscorlib::System::String* ToBase64(mscorlib::System::String* regularString);
		static mscorlib::System::String* FromBase64(mscorlib::System::String* base64string);
		static mscorlib::System::String* XoREncode(mscorlib::System::String* NormalString);
		void _ctor();
		static void _cctor();
	};
}

