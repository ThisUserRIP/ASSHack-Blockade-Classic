#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct CaseInsensitiveAscii : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Net::CaseInsensitiveAscii* StaticInstance;
			IL2CPP::Array<uint8_t>* AsciiToLower;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t GetHashCode(mscorlib::System::Object* myObject);
		int32_t Compare(mscorlib::System::Object* firstObject, mscorlib::System::Object* secondObject);
		int32_t FastGetHashCode(mscorlib::System::String* myString);
		bool Equals(mscorlib::System::Object* firstObject, mscorlib::System::Object* secondObject);
		void _ctor();
		static void _cctor();
	};
}

