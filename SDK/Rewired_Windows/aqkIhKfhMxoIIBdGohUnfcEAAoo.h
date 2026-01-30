#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_Utils_Classes_Data_NativeBuffer.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Windows
{
	struct aqkIhKfhMxoIIBdGohUnfcEAAoo : Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t JwRJwvfeHacUjkMxzqeTLAhkekhB;
		int32_t meyPqemzIvHeaHoWRseOYiOrdcDa;
		int32_t get_maxDevices();
		int32_t get_structSize();
		void _ctor(int32_t structSize, int32_t maxDevices);
	};
}

