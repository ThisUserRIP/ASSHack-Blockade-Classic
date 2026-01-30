#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_DialogHelper; };
namespace Rewired_Core::Rewired { struct InputMapper; };
namespace Rewired_Core::Rewired { struct InputMapper_ConflictFoundEventData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_ControllerSelection; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_QueueEntry; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "..\Rewired_Core\Rewired_Pole.h"
namespace mscorlib::System { struct String; };
#include "Rewired_Demos_ControlRemappingDemo1_UserResponse.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_JoystickAssignmentChange; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_ElementAssignmentChange; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_FallbackJoystickIdentification; };
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_Calibration; };
namespace Rewired_Core::Rewired { struct ControllerStatusChangedEventArgs; };
namespace Rewired_Core::Rewired { struct InputMapper_StoppedEventData; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1 : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_DialogHelper* dialog;
		Rewired_Core::Rewired::InputMapper* inputMapper;
		Rewired_Core::Rewired::InputMapper_ConflictFoundEventData* conflictFoundEventData;
		bool guiState;
		bool busy;
		bool pageGUIState;
		Rewired_Core::Rewired::Player* selectedPlayer;
		int32_t selectedMapCategoryId;
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ControllerSelection* selectedController;
		Rewired_Core::Rewired::ControllerMap* selectedMap;
		bool showMenu;
		bool startListening;
		UnityEngine_CoreModule::UnityEngine::Vector2 actionScrollPos;
		UnityEngine_CoreModule::UnityEngine::Vector2 calibrateScrollPos;
		System::System::Collections::Generic::Queue_1<Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry>* actionQueue;
		bool setupFinished;
		bool initialized;
		bool isCompiling;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style_wordWrap;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style_centeredBox;
		struct StaticFields
		{
			float defaultModalWidth;
			float defaultModalHeight;
			float assignmentTimeout;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void OnEnable();
		void OnDisable();
		void Initialize();
		void Setup();
		void Subscribe();
		void Unsubscribe();
		void OnGUI();
		void HandleMenuControl();
		void Close();
		void Open();
		void DrawInitialScreen();
		void DrawPage();
		void DrawPlayerSelector();
		void DrawMouseAssignment();
		void DrawJoystickSelector();
		void DrawControllerSelector();
		void DrawCalibrateButton();
		void DrawMapCategories();
		void DrawCategoryActions();
		void DrawActionAssignmentButton(int32_t playerId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange actionRange, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ControllerSelection* controller, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		void DrawInvertButton(int32_t playerId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::Pole actionAxisContribution, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ControllerSelection* controller, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		void DrawAddActionMapButton(int32_t playerId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange actionRange, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ControllerSelection* controller, Rewired_Core::Rewired::ControllerMap* controllerMap);
		void ShowDialog();
		void DrawModalWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawModalWindow_OkayOnly(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawElementAssignmentWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawElementAssignmentProtectedConflictWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawElementAssignmentNormalConflictWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawReassignOrRemoveElementAssignmentWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawFallbackJoystickIdentificationWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DrawCalibrationWindow(mscorlib::System::String* title, mscorlib::System::String* message);
		void DialogResultCallback(int32_t queueActionId, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse response);
		UnityEngine_CoreModule::UnityEngine::Rect GetScreenCenteredRect(float width, float height);
		void EnqueueAction(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry* entry);
		void ProcessQueue();
		bool ProcessJoystickAssignmentChange(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_JoystickAssignmentChange* entry);
		bool ProcessElementAssignmentChange(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* entry);
		bool ProcessRemoveOrReassignElementAssignment(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* entry);
		bool ProcessRemoveElementAssignment(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* entry);
		bool ProcessAddOrReplaceElementAssignment(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* entry);
		bool ProcessElementAssignmentConflictCheck(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* entry);
		bool ProcessFallbackJoystickIdentification(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_FallbackJoystickIdentification* entry);
		bool ProcessCalibration(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_Calibration* entry);
		void PlayerSelectionChanged();
		void ControllerSelectionChanged();
		void ClearControllerSelection();
		void ClearMapSelection();
		void ResetAll();
		void ClearWorkingVars();
		void SetGUIStateStart();
		void SetGUIStateEnd();
		void JoystickConnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void JoystickPreDisconnect(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void JoystickDisconnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnConflictFound(Rewired_Core::Rewired::InputMapper_ConflictFoundEventData* data);
		void OnStopped(Rewired_Core::Rewired::InputMapper_StoppedEventData* data);
		void IdentifyAllJoysticks();
		void CheckRecompile();
		void RecompileWindow(int32_t windowId);
		void _ctor();
	};
}

