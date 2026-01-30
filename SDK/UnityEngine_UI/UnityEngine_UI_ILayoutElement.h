#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ILayoutElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		float get_minWidth();
		float get_preferredWidth();
		float get_flexibleWidth();
		float get_minHeight();
		float get_preferredHeight();
		float get_flexibleHeight();
		int32_t get_layoutPriority();
	};
}

