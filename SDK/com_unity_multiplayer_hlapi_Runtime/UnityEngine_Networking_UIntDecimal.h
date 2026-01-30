#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct UIntDecimal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t longValue1;
		uint64_t longValue2;
		mscorlib::System::Decimal decimalValue;
	};
}

