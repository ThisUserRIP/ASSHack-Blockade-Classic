#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Mask : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_RectTransform;
		bool m_ShowMaskGraphic;
		UnityEngine_UI::UnityEngine::UI::Graphic* m_Graphic;
		UnityEngine_CoreModule::UnityEngine::Material* m_MaskMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_UnmaskMaterial;
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		bool get_showMaskGraphic();
		void set_showMaskGraphic(bool value);
		UnityEngine_UI::UnityEngine::UI::Graphic* get_graphic();
		void _ctor();
		bool MaskEnabled();
		void OnSiblingGraphicEnabledDisabled();
		void OnEnable();
		void OnDisable();
		bool IsRaycastLocationValid(UnityEngine_CoreModule::UnityEngine::Vector2 sp, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera);
		UnityEngine_CoreModule::UnityEngine::Material* GetModifiedMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial);
	};
}

