#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Integration_UnityUI_RewiredPointerInputModule.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct InputManager_Base; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Components { struct PlayerMouse; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule_MouseButtonEventData; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace Rewired_Core::Rewired { struct Player; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredStandaloneInputModule : Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputManager_Base* rewiredInputManager;
		bool useAllRewiredGamePlayers;
		bool useRewiredSystemPlayer;
		IL2CPP::Array<int32_t>* rewiredPlayerIds;
		bool usePlayingPlayersOnly;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerMouse>* playerMice;
		bool moveOneElementPerAxisPress;
		bool setActionsById;
		int32_t horizontalActionId;
		int32_t verticalActionId;
		int32_t submitActionId;
		int32_t cancelActionId;
		mscorlib::System::String* m_HorizontalAxis;
		mscorlib::System::String* m_VerticalAxis;
		mscorlib::System::String* m_SubmitButton;
		mscorlib::System::String* m_CancelButton;
		float m_InputActionsPerSecond;
		float m_RepeatDelay;
		bool m_allowMouseInput;
		bool m_allowMouseInputIfTouchSupported;
		bool m_allowTouchInput;
		bool m_deselectIfBackgroundClicked;
		bool m_deselectBeforeSelecting;
		bool m_ForceModuleActive;
		IL2CPP::Array<int32_t>* playerIds;
		bool recompiling;
		bool isTouchSupported;
		double m_PrevActionTime;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_LastMoveVector;
		int32_t m_ConsecutiveMoveCount;
		bool m_HasFocus;
		struct StaticFields
		{
			mscorlib::System::String* DEFAULT_ACTION_MOVE_HORIZONTAL;
			mscorlib::System::String* DEFAULT_ACTION_MOVE_VERTICAL;
			mscorlib::System::String* DEFAULT_ACTION_SUBMIT;
			mscorlib::System::String* DEFAULT_ACTION_CANCEL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::InputManager_Base* get_RewiredInputManager();
		void set_RewiredInputManager(Rewired_Core::Rewired::InputManager_Base* value);
		bool get_UseAllRewiredGamePlayers();
		void set_UseAllRewiredGamePlayers(bool value);
		bool get_UseRewiredSystemPlayer();
		void set_UseRewiredSystemPlayer(bool value);
		IL2CPP::Array<int32_t>* get_RewiredPlayerIds();
		void set_RewiredPlayerIds(IL2CPP::Array<int32_t>* value);
		bool get_UsePlayingPlayersOnly();
		void set_UsePlayingPlayersOnly(bool value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerMouse>* get_PlayerMice();
		void set_PlayerMice(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerMouse>* value);
		bool get_MoveOneElementPerAxisPress();
		void set_MoveOneElementPerAxisPress(bool value);
		bool get_allowMouseInput();
		void set_allowMouseInput(bool value);
		bool get_allowMouseInputIfTouchSupported();
		void set_allowMouseInputIfTouchSupported(bool value);
		bool get_allowTouchInput();
		void set_allowTouchInput(bool value);
		bool get_deselectIfBackgroundClicked();
		void set_deselectIfBackgroundClicked(bool value);
		bool get_deselectBeforeSelecting();
		void set_deselectBeforeSelecting(bool value);
		bool get_SetActionsById();
		void set_SetActionsById(bool value);
		int32_t get_HorizontalActionId();
		void set_HorizontalActionId(int32_t value);
		int32_t get_VerticalActionId();
		void set_VerticalActionId(int32_t value);
		int32_t get_SubmitActionId();
		void set_SubmitActionId(int32_t value);
		int32_t get_CancelActionId();
		void set_CancelActionId(int32_t value);
		bool get_isMouseSupported();
		bool get_isTouchAllowed();
		bool get_allowActivationOnMobileDevice();
		void set_allowActivationOnMobileDevice(bool value);
		bool get_forceModuleActive();
		void set_forceModuleActive(bool value);
		float get_inputActionsPerSecond();
		void set_inputActionsPerSecond(float value);
		float get_repeatDelay();
		void set_repeatDelay(float value);
		mscorlib::System::String* get_horizontalAxis();
		void set_horizontalAxis(mscorlib::System::String* value);
		mscorlib::System::String* get_verticalAxis();
		void set_verticalAxis(mscorlib::System::String* value);
		mscorlib::System::String* get_submitButton();
		void set_submitButton(mscorlib::System::String* value);
		mscorlib::System::String* get_cancelButton();
		void set_cancelButton(mscorlib::System::String* value);
		void _ctor();
		void Awake();
		void UpdateModule();
		bool IsModuleSupported();
		bool ShouldActivateModule();
		void ActivateModule();
		void DeactivateModule();
		void Process();
		bool ProcessTouchEvents();
		void ProcessTouchPress(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
		bool SendSubmitEventToSelectedObject();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetRawMoveVector();
		bool SendMoveEventToSelectedObject();
		void CheckButtonOrKeyMovement(bool& downHorizontal, bool& downVertical);
		void ProcessMouseEvents();
		void ProcessMouseEvent(int32_t playerId, int32_t pointerIndex);
		bool SendUpdateEventToSelectedObject();
		void ProcessMousePress(Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* data);
		void HandleMouseTouchDeselectionOnSelectionChanged(UnityEngine_CoreModule::UnityEngine::GameObject* currentOverGo, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* pointerEvent);
		void OnApplicationFocus(bool hasFocus);
		bool ShouldIgnoreEventsOnNoFocus();
		void OnDestroy();
		bool IsDefaultPlayer(int32_t playerId);
		void InitializeRewired();
		void SetupRewiredVars();
		void SetUpRewiredPlayerMice();
		void SetUpRewiredActions();
		bool GetButton(Rewired_Core::Rewired::Player* player, int32_t actionId);
		bool GetButtonDown(Rewired_Core::Rewired::Player* player, int32_t actionId);
		bool GetNegativeButton(Rewired_Core::Rewired::Player* player, int32_t actionId);
		bool GetNegativeButtonDown(Rewired_Core::Rewired::Player* player, int32_t actionId);
		float GetAxis(Rewired_Core::Rewired::Player* player, int32_t actionId);
		void CheckEditorRecompile();
		void OnEditorRecompile();
		void ClearRewiredVars();
		bool DidAnyMouseMove();
		bool GetMouseButtonDownOnAnyMouse(int32_t buttonIndex);
		void OnRewiredInitialized();
		void OnRewiredShutDown();
	};
}

