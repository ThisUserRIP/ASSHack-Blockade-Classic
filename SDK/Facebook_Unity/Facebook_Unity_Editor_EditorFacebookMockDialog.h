#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct Utilities_Callback_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facebook_Unity::Facebook::Unity::Editor
{
	struct EditorFacebookMockDialog : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rect modalRect;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* modalStyle;
		Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* _Callback_k__BackingField;
		mscorlib::System::String* _CallbackID_k__BackingField;
		Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* get_Callback();
		void set_Callback(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* value);
		mscorlib::System::String* get_CallbackID();
		void set_CallbackID(mscorlib::System::String* value);
		mscorlib::System::String* get_DialogTitle();
		void Start();
		void OnGUI();
		void DoGui();
		void SendSuccessResult();
		void SendCancelResult();
		void SendErrorResult(mscorlib::System::String* errorMessage);
		void OnGUIDialog(int32_t windowId);
		void _ctor();
	};
}

