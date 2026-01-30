#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct UnknownControllerHat_HatButtons; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired
{
	struct UnknownControllerHat : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::UnknownControllerHat_HatButtons* vzrcRdWeinkMksxkFixnbINFgcW;
		void _ctor(Rewired_Core::Rewired::UnknownControllerHat_HatButtons* buttons);
		bool ContainsButtonIndex(int32_t index);
		bool IsButtonIndexCardinal(int32_t index);
		Rewired_Core::Rewired::UnknownControllerHat_HatButtons* GetButtons();
	};
}

