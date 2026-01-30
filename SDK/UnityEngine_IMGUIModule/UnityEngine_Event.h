#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_EventType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_PointerType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_EventModifiers.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct Event : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		struct StaticFields
		{
			UnityEngine_IMGUIModule::UnityEngine::Event* s_Current;
			UnityEngine_IMGUIModule::UnityEngine::Event* s_MasterEvent;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_IMGUIModule::UnityEngine::EventType get_rawType();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mousePosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_delta();
		UnityEngine_IMGUIModule::UnityEngine::PointerType get_pointerType();
		int32_t get_button();
		UnityEngine_IMGUIModule::UnityEngine::EventModifiers get_modifiers();
		void set_modifiers(UnityEngine_IMGUIModule::UnityEngine::EventModifiers value);
		int32_t get_clickCount();
		wchar_t get_character();
		void set_character(wchar_t value);
		UnityEngine_CoreModule::UnityEngine::KeyCode get_keyCode();
		void set_keyCode(UnityEngine_CoreModule::UnityEngine::KeyCode value);
		void set_displayIndex(int32_t value);
		UnityEngine_IMGUIModule::UnityEngine::EventType get_type();
		void set_type(UnityEngine_IMGUIModule::UnityEngine::EventType value);
		mscorlib::System::String* get_commandName();
		void Internal_Use();
		static intptr_t Internal_Create(int32_t displayIndex);
		static void Internal_Destroy(intptr_t ptr);
		UnityEngine_IMGUIModule::UnityEngine::EventType GetTypeForControl(int32_t controlID);
		static bool PopEvent(UnityEngine_IMGUIModule::UnityEngine::Event* outEvent);
		static void Internal_SetNativeEvent(intptr_t ptr);
		static void Internal_MakeMasterEventCurrent(int32_t displayIndex);
		void _ctor();
		void _ctor(int32_t displayIndex);
		void Finalize();
		bool get_shift();
		bool get_control();
		bool get_alt();
		bool get_command();
		static UnityEngine_IMGUIModule::UnityEngine::Event* get_current();
		bool get_isKey();
		bool get_isMouse();
		bool get_isDirectManipulationDevice();
		static UnityEngine_IMGUIModule::UnityEngine::Event* KeyboardEvent(mscorlib::System::String* key);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		mscorlib::System::String* ToString();
		void Use();
		void get_mousePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void get_delta_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
	};
}

