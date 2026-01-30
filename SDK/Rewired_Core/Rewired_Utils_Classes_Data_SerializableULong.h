#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializableULong : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ulong_32BitLow;
		int32_t ulong_32BitHigh;
		uint64_t get_value();
		void set_value(uint64_t value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Utils::Classes::Data::SerializableULong* sULong);
		void WfHpPIKFKMneAdsRTGJyvBGfKou(uint64_t A_1, int32_t& A_2, int32_t& A_3);
		uint64_t dJevNUMPcQiiSqYvLUcQkWfWAlx(int32_t A_1, int32_t A_2);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializableULong* Clone();
	};
}

