#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMap.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired
{
	struct KeyboardMap : Rewired_Core::Rewired::ControllerMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::KeyboardMap* keyboardMap);
		void SetIdentity(int32_t categoryId, int32_t layoutId);
		static Rewired_Core::Rewired::KeyboardMap* Blank(int32_t categoryId, int32_t layoutId);
	};
}

