#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace UnityEngine_UI::UnityEngine::UI { struct GraphicRaycaster; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Base
{
	struct UIContainer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UIModule::UnityEngine::Canvas* Canvas;
		UnityEngine_UIModule::UnityEngine::CanvasGroup* CanvasGroup;
		bool DisableCanvas;
		bool DisableGameObject;
		bool DisableGraphicRaycaster;
		bool Enabled;
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster* GraphicRaycaster;
		UnityEngine_CoreModule::UnityEngine::RectTransform* RectTransform;
		float StartAlpha;
		UnityEngine_CoreModule::UnityEngine::Vector3 StartPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 StartRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 StartScale;
		struct StaticFields
		{
			bool DEFAULT_DISABLE_CANVAS;
			bool DEFAULT_DISABLE_GAME_OBJECT;
			bool DEFAULT_DISABLE_GRAPHIC_RAYCASTER;
			bool DEFAULT_ENABLED;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Disable();
		void Enable();
		void FullScreen(bool resetScaleToOne);
		void Init();
		void Reset();
		void ResetAlpha();
		void ResetPosition();
		void ResetRotation();
		void ResetScale();
		void ResetToStartValues();
		void UpdateStartAlpha();
		void UpdateStartPosition();
		void UpdateStartRotation();
		void UpdateStartScale();
		void UpdateStartValues();
	};
}

