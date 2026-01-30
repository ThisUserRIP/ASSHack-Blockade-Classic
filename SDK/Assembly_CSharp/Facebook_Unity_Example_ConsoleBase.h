#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct ConsoleBase : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* status;
		mscorlib::System::String* lastResponse;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		mscorlib::System::Nullable_1<mscorlib::System::Single> scaleFactor;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* textStyle;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* buttonStyle;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* textInputStyle;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* labelStyle;
		UnityEngine_CoreModule::UnityEngine::Texture2D* _LastResponseTexture_k__BackingField;
		struct StaticFields
		{
			int32_t DpiScalingFactor;
			System::System::Collections::Generic::Stack_1<mscorlib::System::String>* menuStack;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_ButtonHeight();
		static int32_t get_MainWindowWidth();
		static int32_t get_MainWindowFullWidth();
		static int32_t get_MarginFix();
		static System::System::Collections::Generic::Stack_1<mscorlib::System::String>* get_MenuStack();
		static void set_MenuStack(System::System::Collections::Generic::Stack_1<mscorlib::System::String>* value);
		mscorlib::System::String* get_Status();
		void set_Status(mscorlib::System::String* value);
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_LastResponseTexture();
		void set_LastResponseTexture(UnityEngine_CoreModule::UnityEngine::Texture2D* value);
		mscorlib::System::String* get_LastResponse();
		void set_LastResponse(mscorlib::System::String* value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_ScrollPosition();
		void set_ScrollPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_ScaleFactor();
		int32_t get_FontSize();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_TextStyle();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_ButtonStyle();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_TextInputStyle();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_LabelStyle();
		void Awake();
		bool Button(mscorlib::System::String* label);
		void LabelAndTextField(mscorlib::System::String* label, mscorlib::System::String& text);
		bool IsHorizontalLayout();
		void SwitchMenu(mscorlib::System::Type* menuClass);
		void GoBack();
		void _ctor();
		static void _cctor();
	};
}

