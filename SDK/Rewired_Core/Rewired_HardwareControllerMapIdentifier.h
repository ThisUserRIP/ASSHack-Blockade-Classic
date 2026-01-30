#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Rewired_InputSource.h"
#include "Rewired_InputPlatform.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct HardwareControllerMapIdentifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid guid;
		Rewired_Core::Rewired::InputSource inputSource;
		Rewired_Core::Rewired::InputPlatform actualInputPlatform;
		int32_t variantIndex;
		void _ctor(mscorlib::System::Guid guid, Rewired_Core::Rewired::InputSource inputSource, Rewired_Core::Rewired::InputPlatform actualInputPlatform, int32_t variantIndex);
	};
}

