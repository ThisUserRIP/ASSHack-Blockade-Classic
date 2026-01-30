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
	struct TextInfoToUpperData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* range_00e0_0586;
			IL2CPP::Array<wchar_t>* range_1e01_1ff3;
			IL2CPP::Array<wchar_t>* range_2170_2184;
			IL2CPP::Array<wchar_t>* range_24d0_24e9;
			IL2CPP::Array<wchar_t>* range_2c30_2ce3;
			IL2CPP::Array<wchar_t>* range_2d00_2d25;
			IL2CPP::Array<wchar_t>* range_a641_a697;
			IL2CPP::Array<wchar_t>* range_a723_a78c;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

