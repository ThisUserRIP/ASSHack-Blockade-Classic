#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Utility.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Utility; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Utility_Epoch : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::DateTime epoch;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::Decimal unixTime);
		static void _cctor();
	};
}

