#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Ionic_Zip::Ionic::Zlib
{
	struct InternalConstants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t MAX_BITS;
			int32_t BL_CODES;
			int32_t D_CODES;
			int32_t LITERALS;
			int32_t LENGTH_CODES;
			int32_t L_CODES;
			int32_t MAX_BL_BITS;
			int32_t REP_3_6;
			int32_t REPZ_3_10;
			int32_t REPZ_11_138;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

