#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_BaseInputModule.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::UI { struct IMouseInputSource; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct PlayerPointerEventData; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic::Dictionary_2_System::Int32_System::Collections { template <typename TKey, typename TValue> struct Dictionary_2_System_Int32_System_Collections_Generic_Dictionary_2; };
namespace Rewired_Core::Rewired::UI { struct ITouchInputSource; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule_UnityInputSource; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule_MouseState; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Integration_UnityUI_PointerEventType.h"
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_PointerEventData_FramePressState.h"

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredPointerInputModule : UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::UI::IMouseInputSource>* m_MouseInputSourcesList;
		mscorlib::System::Collections::Generic::Dictionary_2_System::Int32_System::Collections::Dictionary_2_System_Int32_System_Collections_Generic_Dictionary_2<mscorlib::System::Int32, IL2CPP::Array<mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData>*>>* m_PlayerPointerData;
		Rewired_Core::Rewired::UI::ITouchInputSource* m_UserDefaultTouchInputSource;
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* __m_DefaultInputSource;
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* m_MouseState;
		struct StaticFields
		{
			int32_t kMouseLeftId;
			int32_t kMouseRightId;
			int32_t kMouseMiddleId;
			int32_t kFakeTouchesId;
			int32_t customButtonsStartingId;
			int32_t customButtonsMaxCount;
			int32_t customButtonsLastId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* get_defaultInputSource();
		Rewired_Core::Rewired::UI::IMouseInputSource* get_defaultMouseInputSource();
		Rewired_Core::Rewired::UI::ITouchInputSource* get_defaultTouchInputSource();
		bool IsDefaultMouse(Rewired_Core::Rewired::UI::IMouseInputSource* mouse);
		Rewired_Core::Rewired::UI::IMouseInputSource* GetMouseInputSource(int32_t playerId, int32_t mouseIndex);
		void RemoveMouseInputSource(Rewired_Core::Rewired::UI::IMouseInputSource* source);
		void AddMouseInputSource(Rewired_Core::Rewired::UI::IMouseInputSource* source);
		int32_t GetMouseInputSourceCount(int32_t playerId);
		Rewired_Core::Rewired::UI::ITouchInputSource* GetTouchInputSource(int32_t playerId, int32_t sourceIndex);
		void RemoveTouchInputSource(Rewired_Core::Rewired::UI::ITouchInputSource* source);
		void AddTouchInputSource(Rewired_Core::Rewired::UI::ITouchInputSource* source);
		int32_t GetTouchInputSourceCount(int32_t playerId);
		void ClearMouseInputSources();
		bool get_isMouseSupported();
		bool IsDefaultPlayer(int32_t playerId);
		bool GetPointerData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData& data, bool create, Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType pointerEventType);
		Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* CreatePointerEventData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType pointerEventType);
		void RemovePointerData(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* data);
		Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* GetTouchPointerEventData(int32_t playerId, int32_t touchDeviceIndex, UnityEngine_InputLegacyModule::UnityEngine::Touch input, bool& pressed, bool& released);
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* GetMousePointerEventData(int32_t playerId, int32_t mouseIndex);
		Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* GetLastPointerEventData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, bool ignorePointerTypeId, Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType pointerEventType);
		static bool ShouldStartDrag(UnityEngine_CoreModule::UnityEngine::Vector2 pressPos, UnityEngine_CoreModule::UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
		void ProcessMove(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* pointerEvent);
		void ProcessDrag(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* pointerEvent);
		bool IsPointerOverGameObject(int32_t pointerTypeId);
		void ClearSelection();
		mscorlib::System::String* ToString();
		void DeselectIfSelectionChanged(UnityEngine_CoreModule::UnityEngine::GameObject* currentOverGo, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* pointerEvent);
		void CopyFromTo(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* from, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* to);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState StateForMouseButton(int32_t playerId, int32_t mouseIndex, int32_t buttonId);
		void _ctor();
	};
}

