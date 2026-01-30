#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_HorizontalOrVerticalLayoutGroup.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct VerticalLayoutGroup : UnityEngine_UI::UnityEngine::UI::HorizontalOrVerticalLayoutGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		void SetLayoutHorizontal();
		void SetLayoutVertical();
	};
}

