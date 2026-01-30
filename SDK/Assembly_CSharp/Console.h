#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Console_Log.h"
namespace Assembly_CSharp { struct Console_Log; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_LogType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct Console : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::KeyCode toggleKey;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Console_Log>* logs;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		bool show;
		bool collapse;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::Texture2D* _t;
		UnityEngine_CoreModule::UnityEngine::Texture2D* _t_h;
		UnityEngine_CoreModule::UnityEngine::Rect windowRect;
		UnityEngine_CoreModule::UnityEngine::Rect titleBarRect;
		UnityEngine_IMGUIModule::UnityEngine::GUIContent* clearLabel;
		UnityEngine_IMGUIModule::UnityEngine::GUIContent* collapseLabel;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_CoreModule::UnityEngine::LogType, UnityEngine_CoreModule::UnityEngine::Color>* logTypeColors;
			int32_t margin;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnEnable();
		void OnDisable();
		void Update();
		void OnGUI();
		void HandleLog(mscorlib::System::String* message, mscorlib::System::String* stackTrace, UnityEngine_CoreModule::UnityEngine::LogType type);
		void Awake();
		void _ctor();
		static void _cctor();
	};
}

