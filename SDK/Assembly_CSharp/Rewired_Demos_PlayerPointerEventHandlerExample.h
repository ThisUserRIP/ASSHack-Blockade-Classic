#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct PlayerPointerEventData; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct PlayerPointerEventHandlerExample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* text;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* log;
		struct StaticFields
		{
			int32_t logLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Log(mscorlib::System::String* o);
		void Update();
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnScroll(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		static mscorlib::System::String* GetSourceName(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* playerEventData);
		void _ctor();
	};
}

