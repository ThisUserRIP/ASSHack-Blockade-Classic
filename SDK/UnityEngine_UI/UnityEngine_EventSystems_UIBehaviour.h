#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct UIBehaviour : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Awake();
		void OnEnable();
		void Start();
		void OnDisable();
		void OnDestroy();
		bool IsActive();
		void OnRectTransformDimensionsChange();
		void OnBeforeTransformParentChanged();
		void OnTransformParentChanged();
		void OnDidApplyAnimationProperties();
		void OnCanvasGroupChanged();
		void OnCanvasHierarchyChanged();
		bool IsDestroyed();
		void _ctor();
	};
}

