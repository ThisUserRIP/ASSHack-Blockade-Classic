#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct Window; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_WindowManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::Window>* windows;
		UnityEngine_CoreModule::UnityEngine::GameObject* windowPrefab;
		UnityEngine_CoreModule::UnityEngine::Transform* parent;
		UnityEngine_CoreModule::UnityEngine::GameObject* fader;
		int32_t idCounter;
		bool get_isWindowOpen();
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* get_topWindow();
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* windowPrefab, UnityEngine_CoreModule::UnityEngine::GameObject* faderPrefab, UnityEngine_CoreModule::UnityEngine::Transform* parent);
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* OpenWindow(mscorlib::System::String* name, int32_t width, int32_t height);
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* OpenWindow(UnityEngine_CoreModule::UnityEngine::GameObject* windowPrefab, mscorlib::System::String* name);
		void CloseTop();
		void CloseWindow(int32_t windowId);
		void CloseWindow(Assembly_CSharp::Rewired::UI::ControlMapper::Window* window);
		void CloseAll();
		void CancelAll();
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* GetWindow(int32_t windowId);
		bool IsFocused(int32_t windowId);
		void Focus(int32_t windowId);
		void Focus(Assembly_CSharp::Rewired::UI::ControlMapper::Window* window);
		void DefocusOtherWindows(int32_t focusedWindowId);
		void UpdateFader();
		void FocusTopWindow();
		void SetFaderActive(bool state);
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* InstantiateWindow(mscorlib::System::String* name, int32_t width, int32_t height);
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* InstantiateWindow(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::GameObject* windowPrefab);
		void DestroyWindow(Assembly_CSharp::Rewired::UI::ControlMapper::Window* window);
		int32_t GetNewId();
		void ClearCompletely();
	};
}

