#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace DOTween::DG::Tweening
{
	struct IDOTweenInit
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		DOTween::DG::Tweening::IDOTweenInit* SetCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity);
	};
}

