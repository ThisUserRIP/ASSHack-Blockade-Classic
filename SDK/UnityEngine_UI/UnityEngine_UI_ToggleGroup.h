#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ToggleGroup : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_AllowSwitchOff;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Toggle>* m_Toggles;
		bool get_allowSwitchOff();
		void set_allowSwitchOff(bool value);
		void _ctor();
		void Start();
		void OnEnable();
		void ValidateToggleIsInGroup(UnityEngine_UI::UnityEngine::UI::Toggle* toggle);
		void NotifyToggleOn(UnityEngine_UI::UnityEngine::UI::Toggle* toggle, bool sendCallback);
		void UnregisterToggle(UnityEngine_UI::UnityEngine::UI::Toggle* toggle);
		void RegisterToggle(UnityEngine_UI::UnityEngine::UI::Toggle* toggle);
		void EnsureValidState();
		bool AnyTogglesOn();
		mscorlib::System::Collections::Generic::IEnumerable_1<UnityEngine_UI::UnityEngine::UI::Toggle>* ActiveToggles();
		UnityEngine_UI::UnityEngine::UI::Toggle* GetFirstActiveToggle();
		void SetAllTogglesOff(bool sendCallback);
	};
}

