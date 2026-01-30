#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct TextInfoToLowerData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* range_00c0_0556;
			IL2CPP::Array<wchar_t>* range_10a0_10c5;
			IL2CPP::Array<wchar_t>* range_1e00_1ffc;
			IL2CPP::Array<wchar_t>* range_2160_216f;
			IL2CPP::Array<wchar_t>* range_24b6_24cf;
			IL2CPP::Array<wchar_t>* range_2c00_2c2e;
			IL2CPP::Array<wchar_t>* range_2c60_2ce2;
			IL2CPP::Array<wchar_t>* range_a640_a696;
			IL2CPP::Array<wchar_t>* range_a722_a78b;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

