#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct IClippable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_gameObject();
		void RecalculateClipping();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void Cull(UnityEngine_CoreModule::UnityEngine::Rect clipRect, bool validRect);
		void SetClipRect(UnityEngine_CoreModule::UnityEngine::Rect value, bool validRect);
		void SetClipSoftness(UnityEngine_CoreModule::UnityEngine::Vector2 clipSoftness);
	};
}

