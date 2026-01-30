#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIComponentBase_1.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UICanvas : Assembly_CSharp::Doozy::Engine::UI::Base::UIComponentBase_1<Assembly_CSharp::Doozy::Engine::UI::UICanvas>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* CanvasName;
		bool CustomCanvasName;
		bool DontDestroyCanvasOnLoad;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvas;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UICanvas* _MasterCanvas_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_DefaultCanvasCategory();
		static mscorlib::System::String* get_DefaultCanvasName();
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* get_MasterCanvas();
		static void set_MasterCanvas(Assembly_CSharp::Doozy::Engine::UI::UICanvas* value);
		static mscorlib::System::String* get_MasterCanvasName();
		UnityEngine_UIModule::UnityEngine::Canvas* get_Canvas();
		bool get_IsMasterCanvas();
		bool get_DebugComponent();
		void Reset();
		void Awake();
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* CreateUICanvas(mscorlib::System::String* canvasName);
		static bool DatabaseContains(mscorlib::System::String* canvasName);
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* GetMasterCanvas(bool createMasterCanvasIfNotFound);
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* GetUICanvas(mscorlib::System::String* canvasName);
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* GetUICanvas(mscorlib::System::String* canvasName, bool createUICanvasIfNotFound, bool returnMasterCanvasIfUICanvasNotFound);
		void _ctor();
	};
}

