#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct IMask
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Enabled();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
	};
}

