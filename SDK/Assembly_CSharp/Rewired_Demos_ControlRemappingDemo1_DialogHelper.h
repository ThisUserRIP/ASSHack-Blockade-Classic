#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_Demos_ControlRemappingDemo1_DialogHelper_DialogType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUI_WindowFunction; };
#include "Rewired_Demos_ControlRemappingDemo1_WindowProperties.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1_WindowProperties; };
#include "Rewired_Demos_ControlRemappingDemo1_UserResponse.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_DialogHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_DialogHelper_DialogType _type;
		bool _enabled;
		float _busyTime;
		bool _busyTimerRunning;
		mscorlib::System::Action_1<mscorlib::System::Int32>* drawWindowDelegate;
		UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* drawWindowFunction;
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_WindowProperties windowProperties;
		int32_t currentActionId;
		mscorlib::System::Action_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse>* resultCallback;
		struct StaticFields
		{
			float openBusyDelay;
			float closeBusyDelay;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float get_busyTimer();
		bool get_enabled();
		void set_enabled(bool value);
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_DialogHelper_DialogType get_type();
		void set_type(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_DialogHelper_DialogType value);
		bool get_busy();
		void _ctor();
		void StartModal(int32_t queueActionId, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_DialogHelper_DialogType type, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_WindowProperties windowProperties, mscorlib::System::Action_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse>* resultCallback);
		void StartModal(int32_t queueActionId, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_DialogHelper_DialogType type, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_WindowProperties windowProperties, mscorlib::System::Action_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse>* resultCallback, float openBusyDelay);
		void Update();
		void Draw();
		void DrawConfirmButton();
		void DrawConfirmButton(mscorlib::System::String* title);
		void DrawConfirmButton(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse response);
		void DrawConfirmButton(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse response, mscorlib::System::String* title);
		void DrawCancelButton();
		void DrawCancelButton(mscorlib::System::String* title);
		void Confirm();
		void Confirm(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse response);
		void Cancel();
		void DrawWindow(int32_t windowId);
		void UpdateTimers();
		void StartBusyTimer(float time);
		void Close();
		void StateChanged(float delay);
		void Reset();
		void ResetTimers();
		void FullReset();
	};
}

